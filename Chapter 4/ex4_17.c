// Exercise 4.17 Solution
// Calculating Credit Limits

#include <stdio.h>

// function main begins program execution
int main(void)
{
	int account;     // current account number
	double limit;    // current credit limit
	double balance;  // current balance
	double newLimit; // new credit limit

	// loop three times
	for (unsigned int counter = 1; counter <= 3; counter++) {

		// get account number, credit limit and balance
		printf("%s", "\nEnter account, limit, balance: ");
		scanf("%d%lf%lf", &account, &limit, &balance);

		newLimit = limit / 2.0; // calculate new limit
		printf("New credit limit for account %d is %.2lf\n", account, newLimit);

		// if balance is greater than new credit limit
		if (balance > newLimit) {
			printf("Limit exceed for amount %d\n", account);
		} // end if
	} // end for
} // end main