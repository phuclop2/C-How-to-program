// Exercise 3.44 Solution
// Side of a Right Triangle

#include <stdio.h>

// function main begins program execution
int main(void)
{	
	int a; // first number
	int b; // second number
	int c; // third number

	// input 3 number
	printf("%s", "Enter three doubling point numbers: ");
	scanf("%d %d %d", &a, &b, &c);

	// use Pythagorean Theorem
	if (c* c == a * a + b * b) {
		printf("The three numbers could be the sides of a right triangle\n");
	} // end if
	else {
		printf("The three numbers probably are not the sides of a right triangle\n");
	} // end else
} // end function main
