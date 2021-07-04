// Exercise 4.23 Solution
// Calculating the Compound Interest with Integers
#include <stdio.h>
#include <math.h>

int main(void)
{
    int dollars;            // dollar portion of amount
    int cents;              // cents portion of amount
    int principal = 100000; // starting principal, in pennies ($1000)
    double rate = .05;      // annual interest rate

    // output table column heads
    printf("%4s%21s\n", "Year", "Amount on deposit");

    // calculate amount on deposit for each of ten years
    for (unsigned int year = 1; year <= 10; ++year) {

        // calculate new amount for specified year (in pennies)
        int amount = principal * pow(1.0 + rate, year);

        // determine cents portion of amount (last two digits)
        cents = amount % 100;

        // determine dollars portion of amount
        // integer division truncates decimal places
        dollars = amount / 100;

        // output one table row
        // display year, dollar portion followed by period
        printf("%4u%18d.", year, dollars);

        // display cents portion
        // if cents portion only 1 digit, insert 0
        if (cents < 10) {
            printf("0%d\n", cents);
        } // end if
        else {
            printf("%d\n", cents);
        } // end else
    } // end for
} // end function main