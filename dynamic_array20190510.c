#include <stdio.h>
#include <stdlib.h>
#include <time.h>

static int randomNumber(){
	return 1 + rand() % (99 - 1 + 1);
}

static void arrInit(int* arr, int len){
	if(!arr){
		return;
	}

	int i = 0;

	for(; i < len; ++i){
		arr[i] = randomNumber();
	}
}

static void arrDisplay(int* arr, int len){
	if(!arr){
		return;
	}

	int i = 0;

	for(; i < len; ++i){
		printf("%d ", arr[i]);
	}
	printf("\n");
}

int main(){
	srand((unsigned int)time(0));

	int len, *arr;

	printf("Please input the length of the array: \n");
	scanf("%d", &len);
	arr = (int*)malloc(sizeof(int) * len);
	if(!arr){
		printf("malloc failed!\n");
		exit(1);
	}

	arrInit(arr, len);

	printf("The array is: \n");
	arrDisplay(arr, len);

	free(arr);
	arr = NULL;

	return 0;
}
