#include <stdio.h>


void swap(int*, int*);
int xor (int, int);

void main() {

	int a = 2;
	int b = 1;
	int c = xor (a, b);

	printf("a: %d\n", a);
	printf("b: %d\n", b);
	printf("c: %d\n", c);
	swap(&a, &b);
	printf("After swap a: %d\n", a);
	printf("After swap b: %d\n", b);
}

int xor (int num1, int num2) {

	return num1 ^ num2;
}

void swap(int* address1, int* address2) {

	*address1 = *address1 ^ *address2;
	*address2 = *address1 ^ *address2;
	*address1 = *address1 ^ *address2;
}