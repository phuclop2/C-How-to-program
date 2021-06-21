// Exercise 3.28 Solution

#include <stdio.h>

// function main begins program execution
int main(void)
{	
	int x = 1;
	int y = 0; 
	while (x <= 5) { // loop 5 times
		y += x * x; // perform calculation
		printf("%d\n", y); 
		++x; // increment counter x
	} // end while
	printf("Total is %d\n", y); // display result
} // end function main