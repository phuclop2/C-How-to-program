// Exercise 4.13 Solution
// Natural Numbers Arithmentic

#include <stdio.h>

// function main begins program execution
int main(void)
{
	unsigned int number;     // define final value
	unsigned int sum = 0;    // define the sum of all numbers
	unsigned int square = 0; // define the sum of the squares
	unsigned int cub = 0;    // define the sum of the cubes

	printf("%s", "Enter the number: ");
	scanf("%u", &number);

	for (unsigned int counter = 1; counter <= number; counter++) {
		sum += counter;
		square += counter * counter;
		cub = counter * counter * counter;
	} // end for

	// display results
	printf("The sum of all natural numbers from 1 till %u is %u\n", number, sum);
	printf("The sum of the squares of all natural numbers from 1 till %u is %u\n", number, square);
	printf("The sum of the cubs of all natural numbers from 1 till %u is %u\n", number, cub);
}