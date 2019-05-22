#include <stdio.h>

int main(){

	printf("files: %s\tline: %d\n", __FILE__, __LINE__);
	printf("date: %s\t\ttime: %s\n", __DATE__, __TIME__);

	return 0;
}
