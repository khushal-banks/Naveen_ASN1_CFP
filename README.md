**Q1. Short Answer type question**
**(a). Explain with example printf () and scanf () function**

```
#include <stdio.h>

int main() {
	/* Declare a character used later for scanf & printf */
	char ch;

	/* Scan a character (ch) from stdin ...
	 * Here, program will wait for user input.
	 * Once user writes a character then,
	 * "scanf" function will store the entered value into ch variable
	 * 
	 * NOTE: 
	 * 1. In 1st argument we have specified the format specifier for char data-type
	 * 2. We have provided address of ch variable in the 2nd argument of scanf function
	 *
	 * For other data-type like int %d will be used as format specifier 
	 */
	scanf(" %c", &ch);

	/* Print the character on stdout ...
	 * Here, printf function will replace %c with the value of ch variable
	 * and line: "You entered: 30" will print on screen
	 *
	 * NOTE:
	 * \n is an escape sequence used for new-line
	 */
	printf("You entered: %c\n", ch);
}
```

**(b). which header file is used for exit ( ) function. **

```
#include <stdlib.h>

int main() {

	/* stdlib.h is the header file used for exit function in C
	 * For details, either google or type following command on a terminal:
	 * man 3 exit
	 * */

	/*
	 * exit function causes the program termination
	 * This function expects an integer paramter as argument
	 *
	 * It is common to pass 0 for EXIT_SUCCESS and 1 for EXIT_FAILURE
	 * 0 indicates that program exited successfully and 1 indicates failure
	 */
	exit(0);
}
```

**(e). W.A.P. to make a calculator using switch case.**

```
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
```
