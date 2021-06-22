// Exercise 3.41 Solution
// Diameter, Circumference and Area of a Circle

#include <stdio.h>

// function main begins program execution
int main(void)
{	
	float radius;		// input radius
	float pi = 3.14159; // value for pi

	printf("%s", "Enter the radius: "); // get radius value
	scanf("%f", &radius);

	// compute and display diameter
	printf("The diameter is %.2f\n", radius * 2);

	// compute and display circumference
	printf("The circumference is %.2f\n", 2 * pi * radius);

	// compute and display area
	printf("The area is %.2f\n", pi * radius * radius);
} // end function main