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
		printf("Percentage is greater than or equal to 50\n");
	} else if (percent >= 40) {
		printf("Percentage is greater than or equal to 40\n");
	} else {
		printf("Percentage is less than 40\n");
	}

	return 0;
}
