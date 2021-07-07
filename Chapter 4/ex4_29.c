// Exercise 4.29 Solution
// De Morgan's Law

#include <stdio.h>

// begin function main
int main(void) 
{
	int x = 10; // define current variable value
	int y = 1;  // define current variable value
	int a = 3;  // define current variable value
	int b = 3;  // define current variable value
	int g = 5;  // define current variable value
	int Y = 1;  // define current variable value
	int i = 2;  // define current variable value
	int j = 9;  // define current variable value

	// display variable values
	puts("current variable values are: ");
	printf("x = %d, y = %d, a = %d,", x, y, a);
	printf(" b = %d\n", b);
	printf("g = %d, Y = %d, i = %d,", g, Y, i);
	printf(" j = %d\n\n", j);

	// part a
	if ((!(x < 5) && !(y >= 7)) == (!((x < 5) || (y >= 7)))) {
		printf("%s", "!(x < 5) && !(y >= 7) is equivalent to "
			"!((x < 5) || (y >= 7))\n");
	} // end if
	else {
		printf("%s", "!(x < 5) && !(y>= 7) is not equivalent to "
			"!((x < 5) || (y >= 7))\n");
	} // end else

	// part b
	if ((!((a == b) && (g != 5))) == (!(a == b) || !(g != 5))) {
		printf("%s", "!((a == b) && (g != 5)) is equivalent to "
			"!(a == b) || !(g != 5)\n");
	} // end if
	else {
		printf("%s", "!((a == b) && (g != 5)) is not equivalent to "
			"!(a == b) || !(g != 5)\n");
	} // end else

	// part c
	if ((!((x <= 8) && (y > 4))) == (!(x <= 8) || !(y > 4))) {
		printf("%s", "!((x <= 8) && (y > 4)) is equivalent to "
			"(!(x <= 8) || !(y > 4))\n");
	} // end if
	else {
		printf("%s", "!((x <= 8) && (y > 4)) is not equivalent to "
			"(!(x <= 8) || !(y > 4))\n");
	} // end else

	// part d
	if ((!((i > 4) && (j <= 6))) == (!(i > 4) || !(j <= 6))) {
		printf("%s", "!((i > 4) && (j <= 6)) is equivalent to "
			"!(i > 4) || !(j <= 6)\n");
	} // end if
	else {
		printf("%s", "!((i > 4) && (j <= 6)) is not equivalent to "
			"!(i > 4) || !(j <= 6)\n");
	} // end else
} // end function main