#include <stdio.h>

int devideByTwo(int);

void main() {

	int number = 296;
	int number2 = devideByTwo(number);

	printf("Number: %d\n", number);
	printf("Number2: %d\n", number2);

}

int devideByTwo(int num) {

	 return num >> 1;
}