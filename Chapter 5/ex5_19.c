// Exercise 5.19 Solution
// Rectangle of Asterisks

#include <stdio.h>

void rectangle(int s1, int s2); // function prototype

int main(void)
{
	int side1; // row
	int side2; // column

	printf("%s", "Enter sides: ");
	scanf_s("%d%d", &side1, &side2);

	rectangle(side1, side2);

} // end main

void rectangle(int s1, int s2)
{
	int i; // outer loop counter
	int j; // inner loop counter

	// loop side times for number of rows
	for (i = 1; i <= s1; i++) {

		// loop side times for number of columns
		for (j = 1; j <= s2; j++) {
			printf("%s", "*");
		} // end inner for

		puts("");
	} // end outer for

} // end function rectangle