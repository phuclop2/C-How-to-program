// Exercise 4.28 Solution
// Calculating Weekly Pay

#include <stdio.h>

// begin function main
int main(void) 
{
	int payCode;	  // current employee's pay code
	int managers = 0; // total number of managers
	int hWorkers = 0; // total number of hourly workers
	int cWorkers = 0; // total number of commision workers
	int pWorkers = 0; // total number of pieceworkers
	int pieces;		  // current pieceworker's number of pieces
	double mSalary;   // manager's salary
	double hSalary;   // hourly worker's salary
	double cSalary;   // commision worker's salary
	double pSalary;   // pieceworker's salary
	double hours;	  // total hours worked
	double otPay;     // overtime pay
	double otHours;   // overtime hours
	double pay;		  // current employee's weekly pay

	// prompt for first employee input
	printf("%s", "Enter paycode (-1 to end): ");
	scanf("%d", &payCode);

	// loop while sentinel value not read from user
	while (payCode != -1) {

		// switch to appropriate computation according to pay code
		switch (payCode) {

			// pay code 1 corresponds to manager
			case 1:

				// prompt for weekly salary
				puts("Manager selected.");
				printf("%s", "Enter weekly salary: ");
				scanf("%lf", &mSalary);

				// manager's pay is weekly salary
				printf("The manager's pay is $%.2lf\n", mSalary);

				++managers; // update total number of managers
				break; // exit switch

			// pay code 2 corresponds to hourly worker
			case 2:

				// prompt for hourly salary
				puts("Hourly worker selected.");
				printf("%s", "Enter the hourly salary: ");
				scanf("%lf", &hSalary);

				// prompt for number of hours worked
				printf("%s", "Enter the total hours worked: ");
				scanf("%lf", &hours);

				// pay fixed for up to 40 hours, 1.5 for hours over 40
				if (hours > 40) {

					// calculate overtime hours and total pay
					otHours = hours - 40;
					otPay = hSalary * 1.5 * otHours + hSalary * 40;
					
					printf("Worker has worked %.1lf overtime hours.\n", otHours);
					printf("Workers pay is $%.2lf\n", otPay);
				} // end if
				else { // no overtime
					pay = hSalary * hours;
					printf("Workers pay is $%.2lf\n", pay);
				} // end else

				++hWorkers; // update total number of hourly workers
				break; // exit switch

			// pay code 3 corresponds to commision worker
			case 3:

				// prompt for gross weekly sales
				puts("Commision worker selected.");
				printf("%s", "Enter gross weekly sales: ");
				scanf("%lf", &cSalary);

				// pay $250 plus 5.7% of gross weekly sales
				pay = 250.0 + 0.057 * cSalary;
				printf("Commision worker's pay is $%.2lf\n", pay);

				++cWorkers; // update total number of commision workers
				break; // exit switch

			// pay code 4 corresponds to pieceworker
			case 4:

				// prompt for number of pieces
				puts("Pieceworker selected.");
				printf("%s", "Enter number of pieces: ");
				scanf("%d", &pieces);

				// prompt for wage per piece
				printf("%s", "Enter wage per piece: ");
				scanf("%lf", &pSalary);

				pay = pieces * pSalary; // compute pay
				printf("Pieceworker's pay is $%.2lf\n", pay);

				++pWorkers; // update total number of pieceworkers
				break; // exit switch

			// default case
			default:
				puts("Invalid pay code.");
				break; // optional, exit switch anyway
		} // end switch

		// prompt for next employee input
		printf("%s", "Enter paycode (-1 to end): ");
		scanf("%d", &payCode);
	} // end while

	// display total counts for each type of employee
	printf("\nTotal number of managers paid:          %d\n", managers);
	printf("Total number of hourly workers paid:    %d\n", hWorkers);
	printf("Total number of commision workers paid: %d\n", cWorkers);
	printf("Total number of pieceworkers paid:      %d\n", pWorkers);
} // end function main