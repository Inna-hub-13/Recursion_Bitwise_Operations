#include <stdio.h>

int powerf(int, int);

void main() {

	int n, power;
	printf("Enter n: ");
	scanf_s("%d", &n);

	printf("Enter power: ");
	scanf_s("%d", &power);
	int res = powerf(n, power);

	printf("%d to the power of %d is %d\n", n, power, res);

}

int powerf(int n, int power) {

	if (power == 0)
		return 1;

	return n * powerf(n, power - 1);
}