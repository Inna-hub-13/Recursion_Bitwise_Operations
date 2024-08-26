#include <stdio.h>

int add(int);

void main() {

	int n = add(5);

	printf("The result is %d\n", n);
}

int add(int number) {

	if (number <= 1)
		return number;

	return number + add(number - 1);
}