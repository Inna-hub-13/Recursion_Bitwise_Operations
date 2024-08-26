#include <stdio.h>

void turnNegative(int*);

void main() {

	int num = 876;
	printf("num: %d\n", num);
	turnNegative(&num);
	printf("After turnNegative num: %d\n", num);
}

void turnNegative(int* address) {

	 *address = ~(*address) + 1;
}