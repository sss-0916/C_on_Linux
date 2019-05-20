#include <stdio.h>
#include <time.h>
#include <stdlib.h>

#define N 10

static int randomNumber(){
	return 11 + rand() % (99 - 11 + 1);
}

static void arrInit(int arr[], int len){
	int i = 0;

	for(; i < len; ++i){
		arr[i] = randomNumber();
	}
}

static void arrDisplay(int arr[], int len){
	int i = 0;

	for(; i < len; ++i){
		printf("%-5d", arr[i]);
	}
	printf("\n");
}

static int asc(int* a, int* b){
	return *a < *b ? 1 : 0;
}

static int desc(int* a, int* b){
	return *a > *b ? 1 : 0;
}

typedef int (*Cmp)(int*, int*);

static void swap(int* a, int* b){
	int temp = *a;
	*a = *b;
	*b = temp;
}

static void bubbleSort(int arr[], int len, Cmp cmp){
	int bound, cur;

	for(bound = 0; bound < len; ++bound){
		for(cur = len - 1; cur > bound; --cur){
			if(cmp(&arr[cur], &arr[cur - 1])){
				swap(&arr[cur], &arr[cur - 1]);
			}
		}
	}
}

int main(){
	srand((unsigned int)time(0));

	int arr[N] = {0};

	arrInit(arr, N);

	printf("The origin array is: \n");
	arrDisplay(arr, N);

	bubbleSort(arr, N, asc);
	printf("The asc array is: \n");
	arrDisplay(arr, N);

	bubbleSort(arr, N, desc);
	printf("The desc array is: \n");
	arrDisplay(arr, N);

	return 0;
}
