// Exercise 4.19 Solution
// Calculating Sales

#include <stdio.h>

// function main begins program execution
int main(void)
{
	int product;		// current product number
	int quantity;		// quantity of current product sold
	double total = 0.0; // current total retail value

	// prompt for input
	printf("%s", "Enter pairs of item numbers and quantitites.\n");
	printf("%s", "Enter EOF for the item number to end input.\n");
	scanf("%d", &product);

	// loop while sentinel value not read from user
	while (product != -1) {
		scanf("%d", &quantity);

		// determine product number and corresponding retail price
		switch (product) {

			case 1:
				total += quantity * 2.98; // update total
				break;
			
			case 2:
				total += quantity * 4.50; // update total
				break;

			case 3:
				total += quantity * 9.98; // update total
				break;

			case 4:
				total += quantity * 4.49; // update total
				break;

			case 5:
				total += quantity * 6.87; // update total
				break;

			default:
				printf("Invalid product code: %d\n", product);
				printf("            Quantity: %d\n", quantity);
		} // end switch

		scanf("%d", &product);
	} // end while

	// display result
	printf("The total retail value was: %.2lf\n", total);
} // end main