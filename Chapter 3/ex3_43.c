// Exercise 3.43 Solution
// Side of a Triangle

#include <stdio.h>

// function main begins program execution
int main(void)
{	
	double a; // first number
	double b; // second number
	double c; // third number

	// input 3 number
	printf("%s", "Enter three doubling point numbers: ");
	scanf("%lf %lf %lf", &a, &b, &c);

	// check whether the numbers represent the sides of a triangle
	if (c < a + b && a < b + c && b < a + c) {
		printf("The three numbers could be the sides of a triangle\n");
	} // end if
	else {
		printf("The three numbers probably are not the sides of a triangle\n");
	} // end else
} // end function main