#include <stdlib.h>

int main() {

	/* Printing the question number [ Optional ] */
	printf("Q1. b\n");

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
