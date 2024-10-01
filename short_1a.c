#include <stdio.h>

int main() {
	/* Declare a character used later for scanf & printf */
	char ch;

	/* Printing the question number [ Optional ] */
	printf("Q1. a\n");

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
