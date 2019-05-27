#include <stdio.h>
#include <stdlib.h>

int main(){
	int c;
	FILE* fp = fopen("temp.txt", "r");
	if(!fp){
		perror("file open error");
		exit(-1);
	}

	while((c = fgetc(fp)) != EOF){
		putchar(c);
	}

	if(ferror(fp)){
		puts("I/O error when reading");
	}
	else if(feof(fp)){
		puts("End of file reached successful");
	}

	fclose(fp);

	return 0;
}
