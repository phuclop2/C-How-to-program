// Exercise 3.20 Solution
// Salary Calculator 

#include <stdio.h>

// function main begins program execution
int main(void)
{	
	float hours; // total hour worked
	float rate; // hourly pay rate
	float salary; // gross pay

	// get first employee's hours worked
	printf("%s", "Enter number of hours worked (-1 to end): ");
	scanf("%f", &hours);

	// loop until sentinel value read from user
	while (hours != -1.0) {

		// get hourly rate
		printf("%s", "Enter hourly rate of the worker ($00.00): ");
		scanf("%f", &rate);

		// if employee worked less than 40 hours
		if (hours <= 40) {
			salary = hours * rate;
		} // end if
		else { // empoyee worked over 40 hours
			salary = 40.0 * rate + (hours - 40.0) * rate * 1.5; 
		} // end else

		// display gross pay
		printf("Salary is $%.2f\n\n", salary);

		// prompt for next employess's data
		printf("%s", "Enter number of hours worked (-1 to end): ");
		scanf("%f", &hours);
	} // end while
} // end function main
