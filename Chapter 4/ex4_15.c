// Exercise 4.15 Solution
// Modified Compound-Interest Program

#include <stdio.h>
#include <math.h>

// function main begins program execution
int main(void)
{
	double principal = 1000.0; // starting principal
	int rate;				   // annual interest rate

	// loop through interest rate 5% to 10%
	for (rate = 5; rate <= 10; rate++) {

		// display table headers
		printf("Interest Rate: %f\n", rate / 100.0);
		printf("%4s%21s\n", "Year", "Amount on deposit");

		// calculate amount on deposit for each of ten years
		for (unsigned int year = 1; year <= 10; year++) {

			// calculate new amount for specified year
			double amount = principal * pow(1 + (rate / 100.0), year);

			// output one table row
			printf("%4u%21.2f\n", year, amount);
		} // end inner for

		printf("%s", "\n");
	} // end outer for
} // end main