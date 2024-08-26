#include <stdio.h>

int countDigits(int);

void main() {

	int n = 19384765;
	printf("Counted digits: %d\n", countDigits(n));
}

int countDigits(int n) {

	static int count = 0;
	if (n == 0)
		return count;

	count++;
	return countDigits(n / 10);
}