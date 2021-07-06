// Exercise 4.26 Solution
// Calculate the Value of ? 
#include <stdio.h>

// function main begins execution
int main(void)
{	
	long double pi = 0.0;    // approxiamated value for pi
	long double num = 4.0;   // numerator
	long double denom = 1.0; // denominator of current temp
	long int loop;			 // loop counter
	long int accuracy;		 // number of terms

	accuracy = 400000; // set decimal accuracy

	// display table headers
	printf("Accuracy set at: %ld\n", accuracy);
	puts("term\t\t  pi");

	// loop through each term
	for (loop = 1; loop <= accuracy; loop++) {

		// if odd-numbered term, add current term
		if (loop % 2 != 0) {
			pi += num / denom;
		} // end if
		else { // if even-numbered term, substract current term
			pi -= num / denom;
		} // end else

		// display number of term and approxiamted value for pi
		printf("%ld\t\t%Lf\n", loop, pi);

		denom += 2; // update denominator
	} // end for
} // end function main