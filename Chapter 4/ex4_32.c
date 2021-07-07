// Exercise 4.32 Solution
// Modified Diamond-Printing Program

#include <stdio.h>

// begin function main
int main(void) 
{
	int line;	  // line counter
	int space;	  // space counter
	int asterisk; // asterisk counter
	int size;     // number of rows in diamond

	// prompt for diamond size
	puts("Enter an odd number for the diamond size (1-19):");
	scanf("%d", &size);

	// top half
	for (line = 1; line <= size; line += 2) {

		// printing preceding spaces
		for (space = (size - line) / 2; space > 0; space--) {
			printf(" ");
		} // end for

		// printing asterisks
		for (asterisk = 1; asterisk <= line; asterisk++) {
			printf("*");
		} // end for

		printf("%s", "\n");
	} // end for

	// bottom half
	for (line = size - 2; line >= 1; line -= 2) {

		// printing preceding space
		for (space = (size - line) / 2; space > 0; space--) {
			printf(" ");
		} // end for

		// printing asterisks
		for (asterisk = 1; asterisk <= line; asterisk++) {
			printf("*");
		} // end for

		printf("%s", "\n");
	} // end for
} // end function main