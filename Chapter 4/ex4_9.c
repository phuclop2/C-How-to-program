// Exercise 4.9 Solution
// Sum and Average of Integers
#include <stdio.h>

int main(void)
{
	int sum = 0; // current sum
	int number;  // number of values
	int value;   // current value
	int i;       // counter

	// display prompt
	printf("%s", "Enter the number of value to be processed: ");
	scanf("%d", &number); // input number of values

	// loop number times
	for (i = 1; i <= number; i++) {
		printf("%s", "Enter a value: ");
		scanf("%d", &value);
		sum += value; // add to sum
	} // end for

	// display sum
	printf("Sum of the %d values is %d\n", number, sum);
	printf("Average of the %d values is %.2f\n", number, (float) sum/number);
} // end main