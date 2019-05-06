#pragma pack(8)

#include <stdio.h>

struct S1{
	char c1;
	int i;
	char c2;
};

#pragma pack()

int main(){

	printf("S1: %lu\n", sizeof(struct S1));

	return 0;
}
