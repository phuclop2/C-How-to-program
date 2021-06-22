// Exercise 3.36 Solution
// Armstrong Numbers

#include <stdio.h>

// function main begins program execution
int main(void)
{	
	int number = 100; // number to count
	int a, b, c, temp;

	while (number <= 999) {

		// find three digits 
		a = number / 100;
		b = (number % 100) / 10;
		c = (number % 100) % 10;
		temp = (a * a * a) + (b * b * b) + (c * c * c);

		if (temp == number) { // check for Armstrong Number
			printf("%d\n", number);
		} // end if

		++number; // increment number
	} // end while
} // end function main
