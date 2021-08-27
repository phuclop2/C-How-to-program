// Exercise 4.12 Solution
// Prime Numbers

#include <stdio.h>

// function main begins program execution
int main(void) {
	for (unsigned int number = 1; number <= 100; number++) {

		if (number <= 1) {
			; // empty body
		} // end if
		else if (number <= 3) {
			printf("%u\r\n", number);
		} // end else if 
		else if (number % 2 == 0 || number % 3 == 0) {
			; // empty body
		} // end else if
		else {

			int counter;
			for (counter = 5; counter * counter <= number; counter += 6) {
				if (number % counter == 0 || number % (counter + 2) == 0)
					break; // exit for
			} // end for

			if (counter * counter > number) {
				printf("%u\r\n", number);
			} // end if
		} // end else
	} // end for
} // end function main