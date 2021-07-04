// Exercise 4.21 Solution
// ASCII Values

#include <stdio.h>

int main(void)
{	
	for (unsigned int i = 0; i <= 127; i++) {

		if (i == 13) {
			printf("%c\t\t\t   %d\t", 13, 13);
			continue;
		} // end if

		printf("%c  %d\t", i, i);

		if ((i+1) % 10 == 0 && i > 10) {
			puts("");
		} // end if
	} // end for
} // end function main
