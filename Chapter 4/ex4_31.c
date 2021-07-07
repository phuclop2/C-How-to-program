// Exercise 4.31 Solution
// Diamond-Printing Program

#include <stdio.h>

// begin function main
int main(void) 
{
	int line;	  // line counter
	int space;	  // space counter
	int asterisk; // asterisk counter

	// top half
	for (line = 1; line <= 9; line += 2) {

		// printing preceding spaces
		for (space = (9 - line) / 2; space > 0; space--) {
			printf(" ");
		} // end for

		// printing asterisks
		for (asterisk = 1; asterisk <= line; asterisk++) {
			printf("*");
		} // end for

		printf("%s", "\n");
	} // end for

	// bottom half
	for (line = 7; line >= 1; line -= 2) {

		// printing preceding space
		for (space = (9 - line) / 2; space > 0; space--) {
			printf(" ");
		} // end for

		// printing asterisks
		for (asterisk = 1; asterisk <= line; asterisk++) {
			printf("*");
		} // end for

		printf("%s", "\n");
	} // end for
} // end function main