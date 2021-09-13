// Exercise 4.33 Solution
// Roman-Numeral Equivalent of Decimal Values

#include <stdio.h>

// begin function main
int main(void) {
	int loop; // loop counter
	int div;  // tens digit
	int mod;  // ones digit

	// display table headers
	puts(" Roman\nNumeral\t\tDecimal");

	// loop 100 times
	for (loop = 1; loop <= 100; loop++) {
		div = loop / 10; // separate tens digit
		mod = loop % 10; // separate ones digit

		// switch structure for tens digit
		switch (div) {

			// print appropriate Roman numeral for tens digit
			case 0:
				break;

			case 1:
				printf("%s", "X");
				break; // exit switch

			case 2:
				printf("%s", "XX");
				break; // exit switch

			case 3:
				printf("%s", "XXX");
				break; // exit switch

			case 4:
				printf("%s", "XL");
				break; // exit switch

			case 5:
				printf("%s", "L");
				break; // exit switch

			case 6:
				printf("%s", "LX");
				break; // exit switch

			case 7:
				printf("%s", "LXX");
				break; // exit switch

			case 8:
				printf("%s", "LXXX");
				break; // exit switch

			case 9:
				printf("%s", "XC");
				break; // exit switch

			case 10:
				printf("%s", "C");
				break; // exit switch

			default:
				break; // exit switch
		} // end switch

		// switch structure for ones digit
		switch (mod) {

			// print appropriate Roman numeral for ones digit
			case 0:
				break; // exit switch

			case 1:
				printf("%s", "I");
				break; // exit switch

			case 2:
				printf("%s", "II");
				break; // exit switch

			case 3:
				printf("%s", "III");
				break; // exit switch

			case 4:
				printf("%s", "IV");
				break; // exit switch

			case 5:
				printf("%s", "V");
				break; // exit switch

			case 6:
				printf("%s", "VI");
				break; // exit switch

			case 7:
				printf("%s", "VII");
				break; // exit switch

			case 8:
				printf("%s", "VIII");
				break; // exit switch

			case 9:
				printf("%s", "IX");
				break; // exit switch

			default:
				break; // exit switch
		} // end switch

		if (loop == 88) printf("\t%d\n", loop);
		else printf("\t\t%d\n", loop);
	} // end for
} // end function main