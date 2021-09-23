// Exercise 5.8 Solution

#include <stdio.h>
#include <math.h>

int main(void)
{
	// calculates and outputs the absolute value
	printf("fabs(%.2f) = %.2f\n", 10.85, fabs(10.85));

	// calculates and outputs floor(x)
	printf("floor(%.2f) = %.1f\n", 10.85, floor(10.85));

	// calculates and outputs the absolute value
	printf("fabs(%.3f) = %.3f\n", -0.678, fabs(-0.678));

	// calculates and outputs ceil(x)
	printf("ceil(%.3f) = %.1f\n", 9.234, ceil(9.234));

	// calculates and outputs the absolute value
	printf("fabs(%.1f) = %.1f\n", 0.0, fabs(0.0));

	// calculates and outputs ceil(x)
	printf("ceil(%.2f) = %.1f\n", -34.87, ceil(-34.87));

	// calculates and outputs ceil(x)
	int x = -12, y = -9.5;
	printf("%s = %.1f\n", "ceil(-fabs(x - floor(y)))", ceil(-fabs(x - floor(y))));
}