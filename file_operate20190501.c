#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(){
	FILE* fp = fopen("file.txt", "w+");
	if(!fp){
		perror("fopen error");
	}

	char write_buf[1024] = {0};
	printf("Please write: \n");
	scanf("%s", write_buf);
	fwrite(write_buf, sizeof(char), strlen(write_buf), fp);

	fseek(fp, 0, SEEK_SET);

	char read_buf[1024] = {0};
	fread(read_buf, sizeof(char), 1023, fp);

	printf("read: %s\n", read_buf);

	fclose(fp);

	return 0;
}
