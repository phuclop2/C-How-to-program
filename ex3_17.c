// Exercise 3.17 Solution
// Mortage Calculator

#include <stdio.h>

// function main begins program execution
int main(void)
{	
	// variables definition
	int accountNumber;
	float mortageAmount;
	float mortageTerm;
	float interestRate;

	float interestPayable;
	float monthlyPayment;

	// processing phase
	// get user's first account number  
	printf("%s", "Enter account number (-1 to end): "); // prompt for input
	scanf("%d", &accountNumber); // read input value

	// loop while sentinel value not yet read from user
	while (accountNumber != -1) {
		printf("%s", "Enter mortage amount (in dollars): "); // prompt for input
		scanf("%f", &mortageAmount); // read input value
		printf("%s", "Enter mortage term (in years): "); // prompt for input
		scanf("%f", &mortageTerm); // read input value
		printf("%s", "Enter interest rate (as a decimal): "); // prompt for input
		scanf("%f", &interestRate); // read input value

		// calculation phase
		interestPayable = mortageAmount * interestRate * mortageTerm; // calculate total interest payable
		mortageAmount += interestPayable; // add total interest payable to mortage amount
		monthlyPayment = mortageAmount / (mortageTerm * 12.0); // calculate monthly payment

		// termination phase
		printf("The monthly payable interest is: $ %.0f\n\n", monthlyPayment);

		// get next user's account number
		printf("%s", "Enter account number (-1 to end): "); // prompt for input
		scanf("%d", &accountNumber); // read input value
	} // end while
} // end function main
