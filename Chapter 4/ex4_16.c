// Exercise 4.16 Solution
// Triangle-Printing Program

#include <stdio.h>

// function main begins program execution
int main(void)
{
	int row;   // row counter
	int col;   // column counter
	int space; // space counter

	// Pattern A, loop 10 times for rows
	for (row = 1; row <= 10; row++) {

		// print now asterisks
		for (col = 1; col <= row; col++) {
			printf("%s", "*");
		} // end inner for

		printf("%s", "\n");
	} // end outer for

	printf("%s", "\n");

	// Pattern B, loop 10 times for rows
	// row counts down to correspond number of asterisks
	for (row = 10; row >= 1; row--) {

		// print row asterisks
		for (col = 1; col <= row; col++) {
			printf("%s", "*");
		} // end inner for

		printf("%s", "\n");
	} // end outer for

	printf("%s", "\n");

	// Pattern C, loop 10 times for rows
	// row counts down to correspond number of asterisks
	for (row = 10; row >= 1; row--) {

		// print (10 - row) number of preceding spaces
		for (space = 1; space <= 10 - row; space++) {
			printf("%s", " ");
		} // end for

		// print row asterisks
		for (col = 1; col <= row; col++) {
			printf("%s", "*");
		} // end for

		printf("%s", "\n");
	} // end for

	printf("%s", "\n");

	// Pattern D, loop 10 times for rows
	for (row = 1; row <= 10; row++) {

		// print (10 - row) number of preceding spaces
		for (space = 1; space <= 10 - row; space++) {
			printf("%s", " ");
		} // end for

		// print row asterisks
		for (col = 1; col <= row; col++) {
			printf("%s", "*");
		} // end for

		printf("%s", "\n");
	} // end for

	printf("%s", "\n");
} // end main