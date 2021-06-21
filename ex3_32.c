// Exercise 3.32 Solution
// Square of Asterisks

#include <stdio.h>

// function main begins program execution
int main(void)
{	
	int side; // side counter
	int temp; // temporary integer
	int asterisk; // asterisk counter

	printf("%s", "Enter the square side: "); // get size of square
	scanf("%d", &side);

	temp = side;

	// loop through row of square
	while (temp > 0) {
		asterisk = side;

		// loop through columns of square
		while (asterisk > 0) {
			printf("*");
			--asterisk;
		} // end inner while

		printf("%s", "\n");
		--temp;
	} // end outer while
} // end function main