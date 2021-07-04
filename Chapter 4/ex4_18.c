// Exercise 4.18 Solution
// Bar-Chart Printing Program

#include <stdio.h>

// function main begins program execution
int main(void)
{
	int number; // currrent number

	printf("Enter 5 numbers between 1 and 30: ");

	// loop 5 times
	for (int i = 1; i <= 5; i++) {
		scanf("%d", &number);

		// print asterisks corresponding to current inpuit
		for (int j = 1; j <= number; j++) {
			printf("%s", "*");
		} // end inner for

		printf("%s", "\n");
	} // end outer for
} // end main