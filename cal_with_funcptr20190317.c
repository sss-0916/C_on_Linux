#include <stdio.h>

typedef int (*Cal)(int, int);

int add(int a, int b){
	return a + b;
}

int sub(int a, int b){
	return a - b;
}

int mul(int a, int b){
	return a * b;
}

int div(int a, int b){
	return a / b;
}

int main(){
	int a, b, result, choose;

	Cal cal[4] = {
		add, sub, mul, div
	};

	printf("Please choose: \n");
	printf("1.add\t2.sub\n3.mul\t4.div\n");
	scanf("%d", &choose);

	printf("Please input a and b: \n");
	scanf("%d %d", &a, &b);

	result = cal[choose - 1](a, b);

	printf("The result is: %d\n", result);

	return 0;
}
