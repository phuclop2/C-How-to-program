// Exercise 3.22 Solution
// Prime Number

#include <stdio.h>

// function main begins program execution
int main(void)
{	
	unsigned int number; // define target number
	unsigned int counter; // define counter

	printf("%s", "Enter the number: "); // prompt for user input
	scanf("%u", &number); // read the number from user

	if (number <= 1) {
		printf("%u is not a prime number\n", number);
	} // end if
	else if (number <= 3) {
		printf("%u is a prime number\n", number);
	} // end else if 
	else if (number % 2 == 0 || number % 3 == 0) {
		printf("%u is not a prime number\n", number);
	} // end else if
	else {
		counter = 5;
		while (counter * counter <= number && counter != -1) {
			if (number % counter == 0 || number % (counter + 2) == 0) {
				printf("%u is not a prime number\n", number);
				counter = -1;
			} // end if
			else {
				counter += 6;
			} // end else
		} // end while
		if (counter != -1) {
			printf("%u is a prime number\n", number);
		} // end if
	} // end else
} // end function main
