// Exercise 3.16 Solution
// Sales Tax

#include <stdio.h>

// function main begins program execution
int main(void)
{
	double totalCollection;
	double sales;
	double countyTax;
	double stateTax;

	char month[10];

	// processing phase
	printf("%s", "Enter total amount collected (-1 to quit): "); // prompt for input
	scanf("%lf", &totalCollection); // read total collection from user
	

	// loop while sentinel value not yet read from user
	while (totalCollection != -1.0) {
		printf("%s", "Enter name of month: "); // prompt for input
		scanf("%9s", month); // read name of month from user

		printf("Total Collections: $ %.2f\n", totalCollection);
		sales = 0.917431 * totalCollection;
		printf("Sales: $ %.2lf\n", sales);
		countyTax = 0.04 * sales;
		printf("County Sales Tax: $ %.2lf\n", countyTax); 
		stateTax = 0.05 * sales;
		printf("State Sales Tax: $ %.2lf\n", stateTax);
		printf("Total Sales Tax Collected: $ %.2lf\n\n", countyTax + stateTax);

		// get next total amount collected from user
		printf("%s", "Enter total amount collected (-1 to quit): "); // prompt for input
		scanf("%lf", &totalCollection); // read total collection from user
	} // end while 
} // end function main