#include <stdio.h>

int read_number() {
	int number;
	printf("Please enter a number: ");
	scanf(" %d", &number);
	return number;
}

int main() {
	/* Declaring variable */
	int a, b, temp;

	/* Reading user input */
	a = read_number();
	b = read_number();

	/* Printing number to check */
	printf("a: %d, b: %d\n", a, b);

	/* Swapping the numbers */
	temp = a;
	a = b;
	b = temp;

	/* Printing number to check */
	printf("a: %d, b: %d\n", a, b);

	return 0;
}
