// Exercise 5.11 Solution
// Rounding Numbers

#include <stdio.h>
#include <math.h>

double roundToInteger(double n);	 // function prototype
double roundToTenths(double n);		 // function prototype
double roundToHundredths(double n);  // function prototype
double roundToThousandths(double n); // function prototype

int main(void)
{
	int i;		   // loop counter
	int count;	   // number of values to process
	double number; // current input

	printf("%s", "How many numbers do you want to process ? ");
	scanf_s("%d", &count);

	// loop for inputs
	for (i = 0; i < count; i++) {
		printf("%s", "Enter number: ");
		scanf_s("%lf", &number);

		// display number rounded to nearest integer
		printf("%f rounded to an integer is %f\n",
			number, roundToInteger(number));

		// display number rounded to nearest tenth
		printf("%f rounded to the nearest tenth is %f\n",
			number, roundToTenths(number));

		// display number rounded to nearest hundredth
		printf("%f rounded to the nearest hundredth is %f\n",
			number, roundToHundredths(number));

		// display number rounded to nearest thousandth
		printf("%f rounded to the nearest thousand is %f\n",
			number, roundToThousandths(number));
	} // end for
} // end main

// roundToInteger rounds n to nearest integer
double roundToInteger(double n)
{
	return floor(n + .5);

} // end function roundToInteger

// roundToTenths rounds n to nearest tenth

double roundToTenths(double n)
{
	return floor(n * 10 + .5) / 10;

} // end function roundToTenths

// roundToHundredths rounds n to nearest hundredth

double roundToHundredths(double n)
{
	return floor(n * 100 + .5) / 100;

} // end function roundToHundredths

// roundToThousandths rounds n to nearest thousandth

double roundToThousandths(double n)
{
	return floor(n * 1000 + .5) / 1000;

} // end function roundToThousandths
