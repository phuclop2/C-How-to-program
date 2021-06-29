// Exercise 3.26 Solution
// Two Largest Numbers

#include <stdio.h>

// function main begins program execution
int main(void)
{	
	int counter;       // counter for 10 repetitions
	int number;        // current number input
	int largest;       // largest number found
	int secondLargest; // second largest number found

	// initialization phase
	counter = 2;
	secondLargest = 0;

	// processing phase
	printf("%s", "Enter the first number: "); // get first number
	scanf("%d", &largest);
	
	// loop 9 more times
	while (counter <= 10) {
		printf("%s", "Enter next number: "); // prompt for next number
		scanf("%d", &number);

		// if current number is greater than largest
		if (number > largest) {
			
			// update second largest with previous largest
			secondLargest = largest;

			// update largest with current largest
			largest = number;
		} // end if
		else {

			// if number is between secondLargest and largest
			if (number > secondLargest) {
				secondLargest = number;
			} // end if
		} // end else
		++counter;
	} // end while

	// termination phase
	// display two largest numbers
	printf("Largest is %d\n", largest);
	printf("Second largest is %d\n", secondLargest);
} // end function main