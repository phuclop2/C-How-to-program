// Exercise 5.16 Solution
// Sides of a Triangle

#include <stdio.h>
#include <math.h>

double calculateArea(double a, double b, double c);

int main(void)
{
	int i;		  // loop counter
	double side1; // value for first side
	double side2; // value for second side
	double side3; // value for second side

	// loop 3 times
	for (i = 1; i <= 3; i++) {
		printf("%s", "Enter the sides of the triangle: ");
		scanf_s("%lf%lf%lf", &side1, &side2, &side3);

		// calculate and display hypotenuse value
		printf("Area: %.3f\n\n", calculateArea(side1, side2, side3));
	} // end for
	
}

double calculateArea(double a, double b, double c)
{
	// check whether the numbers represent the sides of a triangle
	if (c < a + b && a < b + c && b < a + c) { 
		// calculating the area
		double p = (a + b + c) / 2;							 // semi-perimeter
		double area = sqrt(p * (p - a) * (p - b) * (p - c)); // area of the triangle 
		return area;
	} // end if
	else {
		printf("The three numbers probably are not the sides of a triangle\n");
	} // end else

} // end function calculateArea