#include <stdio.h>

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
	int choose = 0;
	int a, b, result;

	printf("Please choose: \n");
	printf("1.add\t2.sub\n3.mul\tdiv\n");
	scanf("%d", &choose);

	printf("Please input a and b: \n");
	scanf("%d %d", &a, &b);

	switch(choose){
		case 1:
			result = add(a, b);
			break;
		case 2:
			result = sub(a, b);
			break;
		case 3:
			result = mul(a, b);
			break;
		case 4:
			result = div(a, b);
			break;
		default:
			printf("input error!\n");
			break;
	}

	printf("The result is: %d\n", result);

	return 0;
}
