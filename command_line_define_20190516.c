#include <stdio.h>

int main(){
	int arr[LEN];
	int i = 0;

	for(; i < LEN; ++i){
		arr[i] = i;
	}

	printf("The array is: \n");
	for(i = 0; i < LEN; ++i){
		printf("%d ", arr[i]);
	}
	printf("\n");

	return 0;
}
