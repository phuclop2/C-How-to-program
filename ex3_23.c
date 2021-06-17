// Exercise 3.23 Solution
// Find the Largest Number

#include <stdio.h>

// function main begins program execution
int main(void)
{	
	int counter; // counter for 10 repetitions
	int number;  // current number input
	int largest; // largest number found so far

	// initialization phase
	counter = 2;

	// processing phase
	printf("%s", "Enter the first number: "); // get first number
	scanf("%d", &largest); // read number from user

	// loop 9 times
	while (counter <= 10) {
		printf("%s", "Enter next number: "); // get next number
		scanf("%d", &number); // read number from user

		// if current number is greater than the largest
		if (number > largest) {
			largest = number; // replace the largest
		} // end if

		counter++; // increment counter 
	} // end while

	// termination phase 
	printf("Largest is %d\n", largest); // display the largest number
} // end function main
