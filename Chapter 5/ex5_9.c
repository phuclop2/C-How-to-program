// Exercise 5.9 Solution
// Car Rental Services

#include <stdio.h>
#include <math.h>

double calculateCharges(double hours); // function prototype

int main(void)
{
	double h;				   // number of hours for current car
	double currentCharge;	   // parking charge for current car
	double totalCharges = 0.0; // total charges
	double totalHours = 0.0;   // total number of hours
	int i;					   // loop counter
	int first = 1;			   // flag for printing table headers

	printf("%s", "Enter the hours parked for 3 cars: ");

	// loop 3 times for 3 cars
	for (i = 1; i <= 3; i++) {
		scanf_s("%lf", &h);
		totalHours += h; // add current hours to total hours

		// if first time through loop, display headers
		if (first) {
			printf("%5s%15s%15s\n", "Car", "Hours", "Charge");

			// set flag to false to prevent from printing again
			first = 0;
		} // end if

		// calculate current car's charge and update total
		totalCharges += (currentCharge = calculateCharges(h));

		// display row data for current car
		printf("%5d%15.1f%15.2f\n", i, h, currentCharge);
	} // end for

	// display row data for totals
	printf("%5s%15.1f%15.2f\n", "TOTAL", totalHours, totalCharges);
} // end main

// calculateCharges returns charge according to number of hours
double calculateCharges(double hours)
{
	double charge = 0.0; // calculated charge

	int n = ceil(hours / 24);
	switch (n) {
		case 1: // day 1
			// $25 up to 8 hours
			if (hours < 8) {
				charge = 25.0 + 0.5 * hours;
			} // end if

			// $5 for each hour after 8 hours
			else if (hours < 12) {
				charge = 25.0 + 5 * ceil(hours - 8.0) + 0.5 * hours;
			} // end else if
			else { // maximum charge $50
				charge = 50.0 + 0.5 * hours;
			} // end else
			break;

		case 2: // day 2
			hours -= 24;
			if (hours < 10) {
				charge = 50.0 + 0.5 * (hours + 24.0) + 5 * ceil(hours);
			} // end if
			else {
				charge = 2 * 50.0 + 0.5 * (hours + 24.0);
			} // end else
			break;

		case 3: // day 3
			hours -= (2 * 24.0);
			if (hours < 10) {
				charge = 2 * 50.0 + 0.5 * (hours + 2 * 24.0) + 5 * ceil(hours);
			} // end if
			else {
				charge = 3 * 50.0 + 0.5 * (hours + 24.0);
			} // end else
			break;
	} // end switch

	return charge; // return calculated charge

} // end function calculateCharges