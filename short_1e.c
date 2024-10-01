/* Calculator - Program using switch-case
 * NOTE: It is assumed that input numbers will be integers.
 * Because, the question is for 2 marks only */
#include <stdio.h>

int read_number() {
	int number;
	printf("Please enter a number: ");
	scanf(" %d", &number);
	return number;
}

char read_operation() {
	char operation;
	printf("Operation (+, -, *, /): ");
	scanf(" %c", &operation);
	return operation;
}

int calculate(int a, int b, char op, float* result) {
	/* Every calculation is assumed to be valid until an error occurs */
	int valid = 1;

	switch (op) {
		case '+': /* Addition Operation:
			   * Result a+b is type-casted to float */

			*result = (float) (a + b);
			break;
		case '-': /* Subtract Operation:
			   * Result a-b is type-casted to float */

			*result = (float) (a - b);
			break;
		case '*': /* Multiplication Operation:
			   * Result a*b is type-casted to float */

			*result = (float) (a * b);
			break;
		case '/': /* Division Operation:
			   * Here, a is first type-casted to float
			   * and then divided by b
			   *
			   * This is because,
			   * Otherwise integer divided by integer will be an integer (not float)
			   * and we will loose the decimal precision. */

			if (b == 0) valid = 0; // Division by 0 is not possible
			else *result = ((float) a) / b;
			break;
		default:
			/* Unsupported Operation */
			valid = 0;
			break;
	}

	return valid;
}

int main() {
	/* Declaring required variables */
	int a, b;
	char op;
	float result;
	int valid;

	/* Printing the question number [ Optional ] */
	printf("Q1. e\n");

	/* Infinite Loop: */
	while (1) {
		/* Reading user input */
		a = read_number();
		op = read_operation();
		b = read_number();

		/* Calculate operation */
		valid = calculate(a, b, op, &result);

		/* Printing result if valid */
		if (valid) {
			printf("%d %c %d = %f\n", a, op, b, result);
		}

		printf("\n"); /* Printing 1 extra new line */
		printf("Type \"Ctrl+c\" to terminate program\n");
		printf("\n"); /* Printing 1 extra new line */
	}

	return 0; /* Program should never reach here */
}
