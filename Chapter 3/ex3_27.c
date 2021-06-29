// Exercise 3.27 Solution
// Validating User Input

#include <stdio.h>

// function main begins program execution
int main(void)
{	
	int passes = 0;	  // number of passes
	int failures = 0; // number of failures
	int student = 1;  // student counter
	int result;		  // exam result

	// process 10 students using counter-controlled loop
	while (student <= 10) {

		// prompt user for input and obtain value from user
		printf("%s", "Enter result (1 = pass, 2 = fail): ");
		scanf("%d", &result);

		// loop until valid input
		while (result != 1 && result != 2) {
			printf("%s", "Invalid result\nEnter result (1 = pass, 2 = fail): ");
			scanf("%d", &result);
		} // end while
		
		// if result is 1, increment passes
		if (result == 1) {
			++passes;
		} // end if
		else { // if result is not 1, increment failures
			++failures;
		} // end else

		++student; // increment student counter
	} // end while

	printf("Passed %d\nFailed %d\n", passes, failures);

	// if more than eight students passed, print "Bonus to instructor!"
	if (passes > 8) {
		puts("Bonus to instructor!");
	} // end if
} // end function main