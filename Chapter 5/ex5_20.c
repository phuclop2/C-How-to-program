// Exercise 5.20 Solution
// Displaying a Rectangle of Any Character

#include <stdio.h>

void rectangle(int side1, int side2, char fillCharacter); // function prototype

int main(void)
{
	int s1; // row
	int s2; // column
	char c; // fill character

	printf("%s", "Enter a character and sides lengths: ");
	scanf("%c %d %d", &c, &s1, &s2);

	rectangle(s1, s2, c);

} // end main

void rectangle(int side1, int side2, char fillCharacter)
{
	int loop;  // outer loop counter
	int loop2; // inner loop counter

	// loop side times for number of rows
	for (loop = 1; loop <= side1; loop++) {

		// loop side times for number of columns
		for (loop2 = 1; loop2 <= side2; loop2++) {
			printf("%c", fillCharacter);
		} // end inner for

		puts("");
	} // end outer for

} // end function rectangle