// Exercise 4.30 Part A Solution
// Replacing switch with if...else

#include <stdio.h>

// begin function main
int main(void) 
{
    unsigned int aCount = 0;
    unsigned int bCount = 0;
    unsigned int cCount = 0;
    unsigned int dCount = 0;
    unsigned int fCount = 0;

    puts("Enter the letter grades.");
    puts("Enter the EOF character to end input.");
    int grade; // one grade 

    // loop until user types end-of-file key sequence
    while ((grade = getchar()) != EOF) {

        // update count for appropriate grade
        if (grade == 'A' || grade == 'a') {
            ++aCount;
        } // end if
        else if (grade == 'B' || grade == 'b') {
            ++bCount;
        } // end else if
        else if (grade == 'C' || grade == 'c') {
            ++cCount;
        } // end else if
        else if (grade == 'D' || grade == 'd') {
            ++dCount;
        } // end else if
        else if (grade == 'F' || grade == 'f') {
            ++fCount;
        } // end else if
        else if (grade == '\n' || grade == '\t' || grade == ' ') {
            ; // empty body
        } // end else if
        else {
            printf("%s", "Incorrect letter grade entered.");
            puts(" Enter a new grade.");
        } // end else
    } // end while

    // output summary of results
    puts("\nTotals for each letter grade are:");
    printf("A: %u\n", aCount);
    printf("B: %u\n", bCount);
    printf("C: %u\n", cCount);
    printf("D: %u\n", dCount);
    printf("F: %u\n", fCount);
} // end function main