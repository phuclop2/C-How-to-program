// Exercise 4.10 Solution
// Conversion Celsius to Fahrenheit
#include <stdio.h>

int main(void)
{
	printf("%30s%20s", "degree Celsius", "degree Fahrenheit\n");
	for (unsigned int x = 30; x <= 50; x++) {
		printf("%11s", "Temperature");
		printf("%19u", x);
		printf("%19.2f", 1.8 * x + 32);
		puts("");
	} // end for
} // end main