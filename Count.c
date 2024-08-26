#include <stdio.h>

int countf(char*);

void main() {

	char arr[6] = "lol";
	int size = countf(arr);
	printf("The size of arr is %d\n", size);
}

int countf(char* string) {

	static int count = 0;

	if (string[count] == '\0')
		return count;

	count++;

	return countf(string);

}