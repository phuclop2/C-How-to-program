// Exercise 5.18 Solution
// Even or Odd

#include <stdio.h>

int isEven(int a); // function prototype

int main(void)
{
	int x; // current input
	int i; // loop counter

	// loop for 3 inputs
	for (i = 1; i <= 3; i++) {
		printf("%s", "Enter an integer: ");
		scanf_s("%d", &x);

		// determine if input is even
		if (isEven(x)) {
			printf("%d is an even integer\n\n", x);
		} // end if
		else {
			printf("%d is not an even integer\n\n", x);
		} // end else

	} // end for

} // end main

// isEven returns true if a is even
int isEven(int a)
{
	return !(a % 2);
} // end function isEven