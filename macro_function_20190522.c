#include <stdio.h>

#define MAX(a, b) a > b ? a : b

int main(){
	int a = 1;
	int b = 2;

	printf("max: %d\n", MAX(a, b));

	return 0;
}
