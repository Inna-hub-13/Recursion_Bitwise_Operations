#include <stdio.h>


int multiplyByEight(int);

void main() {

	int number, numEight;

	printf("Enter number: ");
	scanf_s("%d", &number);

	numEight = multiplyByEight(number);
	printf("numEight: %d\n", numEight);

}

int multiplyByEight(int num) {

	return num << 3;
}