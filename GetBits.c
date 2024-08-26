#include <stdio.h>

void getBits(int number);

void main() {

	int num = 7;
	printf("Number is %d\n", num);
	getBits(num);
}

void getBits(int number) {

	for (int i = (sizeof(int) * 8) - 1; i >= 0; i--)
		printf("%d", (number >> i) & 1);

	printf("\n");

}