// Exercise 3.31c Solution

#include <stdio.h>

// function main begins program execution
int main(void)
{	
	int x = 5;
	int y = 8;

	if (y == 8) {
		if (x == 5)
			puts("@@@@@");
	}
	else {
		puts("#####");
		puts("$$$$$");
	}
	puts("&&&&&");
	
} // end function main