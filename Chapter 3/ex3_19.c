// Exercise 3.19 Solution
// Interest Calculator 

#include <stdio.h>

// function main begins program execution
int main(void)
{	
	double principal; // loan principal
	double rate;		 // interest rate
	double interest;  // interest charge
	int term;        // length of loan in days

	// get loan principal
	printf("%s", "Enter loan principal (-1 to end): ");
	scanf("%lf", &principal);

	// loop until sentinel value is read from user
	while (principal != -1.0) {
		printf("%s", "Enter interest rate: "); // get rate
		scanf("%lf", &rate);

		printf("%s", "Enter term of the loan in days: "); // get term 
		scanf("%d", &term);

		// calculate interest charge
		interest = principal * rate * term / 365.0;
		printf("The interest charge is $%.2lf\n\n", interest);

		// get next loan principal
		printf("%s", "Enter loan principal (-1 to end): ");
		scanf("%lf", &principal);
	} // end while
} // end function main
