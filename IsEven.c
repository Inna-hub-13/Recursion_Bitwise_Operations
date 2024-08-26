#include <stdio.h>
#include <stdbool.h>

int orOne(int num);
bool isEven(int);
bool isEvenVersion2(int);

void main() {

	int num = -11;
	int num1 = orOne(num);

	printf("num: %d, orOne: %d\n", num, num1);
	printf(isEven(num) ? "num is even\n" : "num is odd\n");
	printf(isEvenVersion2(num) ? "num is even\n" : "num is odd\n");
}

int orOne(int num) {

	return num | 1;
}

bool isEven(int num) {

	return (num | 1) != num;
}

bool isEvenVersion2(int num) {

	return (num & 1) == 0;
}