**Q1. Short Answer type question** <br /><br />
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

**(b). which header file is used for exit ( ) function.**

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

**(c). Write all the data types with its range.**

| Data Type | Size | Signed/Unsigned Range |
| -- | -- | -- |
| char | 1 | (-128 to 127) or (0 to 255) |
| short int | 2 | (-32,768 to 32,767) or (0 to 65,535) |
| int | 4 | (-2,147,483,648 to 2,147,483,647) or (0 to 4,294,967,295) |
| long long int | 8 | (-9,223,372,036,854,775,808 to 9,223,372,036,854,775,807) to (0 to 18,446,744,073,709,551,615) |
| float | 4 | 1.2E-38 to 3.4E+38 |
| double | 8 | 1.7E-308 to 1.7E+308 |
| long double | 16 | 3.4E-4932 to 1.1E+4932 |

**(d). what do you mean by logical operator.** <br/>
Logical operators in C are used to combine multiple conditions/constraints. Logical Operators returns either 0 or 1, it depends on whether the expression result is true or false.
- Logical AND ( && ) - returns true only if both operands are non-zero.
- Logical OR ( || ) - returns true if any one of the operands is non-zero.
- Logical NOT ( ! ) - If the given operand is true then the logical NOT operator will make it false and vice-versa

| X | Y | X && Y | X \|\| Y |
| -- | -- | -- | -- |
| 0 | 0 | 0 | 0 |
| 0 | 1 | 0 | 1 |
| 1 | 0 | 0 | 1 |
| 1 | 1 | 1 | 1 |

| X | !X |
| -- | -- |
| 0 | 1 |
| 1 | 0 |

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
**Q2. Explain the concept of Control Statement in c with an example**

**Q3. W.A. P. to enter obtained marks and total marks through the keyboard and then print if per is** <br/>
**Precentage is greater than or equal to 60** <br/>
**Percentage is greater than or equal to 50 but less than 60** <br/>
**Percentage is greater than or equal to 40 but less than 50** <br/>
**Percentage is less than 40** <br/>
```
#include <stdio.h>

int main() {
	/* Declare required variables */
	int marks, total, percent;

	/* Reading obtained marks */
	printf("Please enter obtained marks: ");
	scanf(" %d", &marks);

	/* Reading total marks */
	printf("Please enter total marks: ");
	scanf(" %d", &total);

	/* NOTE: 100 is multiplied to obtained marks first to make;
	 * numerator larger than total marks */
	percent = (100 * marks) / total;

	if (percent >= 60) {
		printf("Percentage is greater than or equal to 60\n");
	} else if (percent >= 50) {
		printf("Percentage is greater than or equal to 50 but less than 60\n");
	} else if (percent >= 40) {
		printf("Percentage is greater than or equal to 40 but less than 50\n");
	} else {
		printf("Percentage is less than 40\n");
	}

	return 0;
}
```

**Q4. W.A.P. to enter a number and check this is even or odd.**
```
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
```

**Q5. W.A.P to Swapping of two numbers using third variable where number entered throughthe keyboard**
```
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
```
