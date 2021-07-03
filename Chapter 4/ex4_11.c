// Exercise 4.11 Solution
// Calculating the Sum of Multiples
#include <stdio.h>

int main(void)
{
	unsigned int sum = 0;

	for (unsigned int x = 7; x <= 100; x += 7) {
		sum += x;
	} // end for

	// display result
	printf("The sum of all multiples of 7 from 1 to 100 is %u\n", sum);
} // end main