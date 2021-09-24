// Exercise 5.17 Solution
// Sides of a Right Triangle

#include <stdio.h>
#include <math.h>

int checkRightTriangle(int a, int b, int c);

int main(void)
{
	int i;	   // loop counter
	int side1; // value for first side
	int side2; // value for second side
	int side3; // value for second side

	// loop 3 times
	for (i = 1; i <= 3; i++) {
		printf("%s", "Enter the sides of the triangle: ");
		scanf_s("%d%d%d", &side1, &side2, &side3);

		if (checkRightTriangle(side1, side2, side3)) {
			printf("The three numbers could be the sides of a right triangle\n");
		} // end if
		else {
			printf("The three numbers probably are not the sides of a right triangle\n");
		} // end else
	} // end for
	
} // end main

int checkRightTriangle(int a, int b, int c)
{
	// use Pythagorean Theorem
	if ((c * c == a * a + b * b) || (a * a == c * c + b * b) || (b * b == a * a + c * c)) {
		return 1;
	} // end if
	else {
		return 0;
	} // end else

} // end function calculateArea