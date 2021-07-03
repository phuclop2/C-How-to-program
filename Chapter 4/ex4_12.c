// Exercise 4.12 Solution
// Prime Numbers

#include <stdio.h>

// function main begins program execution
int main(void)
{
	for (unsigned int number = 1; number <= 100; number++) {

		if (number <= 1) {
			printf("%s", "");
		} // end if
		else if (number <= 3) {
			printf("%u\n", number);
		} // end else if 
		else if (number % 2 == 0 || number % 3 == 0) {
			printf("%s", "");
		} // end else if
		else {
			int counter = 5;

			while (counter * counter <= number && counter != -1) {

				if (number % counter == 0 || number % (counter + 2) == 0) {
					printf("%s", "");
					counter = -1;
				} // end if
				else {
					counter += 6;
				} // end else
			} // end while

			if (counter != -1) {
				printf("%u\n", number);
			} // end if
		} // end else
	} // end for
} // end function main
