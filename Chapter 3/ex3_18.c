// Exercise 3.18 Solution
// Sales-Commission Calculator 

#include <stdio.h>

// function main begins program execution
int main(void)
{	
	float sales; // gross weekly sales
	float wage; // commissioned earnings

	// get first sales
	printf("%s", "Enter sales in dollars (-1 to end): ");
	scanf("%f", &sales); 

	// loop until sentinel value read from user
	while (sales != -1) {
		wage = 200.0 + 0.09 * sales; // calculate wage

		// display salary
		printf("Salary is: $%.2f\n\n", wage);

		// prompt for next sales
		printf("%s", "Enter sales in dollars (-1 to end): ");
		scanf("%f", &sales);
	} // end while
} // end function main
