#include <stdio.h>

long factorial(int);

void main() {

	int n = 23;
	printf("Factorial of %d is %ld\n", n, factorial(n));
}

long factorial(int n) {

	if (n <= 1)
		return 1;

	return n * factorial(n - 1);
}