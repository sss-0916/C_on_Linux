#include <stdio.h>

struct {
	char a;
	int b;
	double c;
} s;

struct {
	char a;
	int b;
	double c;
} *p;

int main(){
	p = &s;

	return 0;
}
