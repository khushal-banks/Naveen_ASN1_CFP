#include <stdio.h>

int main() {
	/* Declaring variable */
	int number;

	/* Reading a number */
	printf("Please enter a number: ");
	scanf(" %d", &number);

	/* Checking if number leaves a remainder after dividing by 2 */
	if (number % 2) {
		printf("Number is Odd\n");
	} else {
		printf("Number is Even\n");
	}

	return 0;
}
