// Exercise 3.35 Solution
// Printing the Decimal Equivalent of a Binary Number

#include <stdio.h>

// function main begins program execution
int main(void)
{	
	int binary;			// current value of binary number
	int number;			// input binary number
	int decimal = 0;	// current value of decimal number
	int highBit = 16;   // value of highest bit 
	int factor = 10000; // factor of 10 to pick off digits

	// prompt for binary input
	printf("%s", "Enter a binary number (5 digits maximum): ");
	scanf("%d", &binary);

	number = binary; // save in number for final display

	// loop 5 times using power of 2
	while (highBit >= 1) {

		// update decimal value with decimal value corresponsing to current highest binary bit
		decimal += binary / factor * highBit; 

		// reduce binary number to eliminate current highest bit
		binary %= factor;

		// reduce high bit by factor of 2, i.e. move one bit to the rightr
		highBit /= 2;

		// reduce factor by power of 10, i.e. move one bit to the right
		factor /= 10; 
	} // end while

	printf("The decimal equivalent of %d is %d\n", number, decimal);
} // end function main