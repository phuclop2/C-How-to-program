// Exercise 4.30 Part B Solution
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

        if (grade == 'B' || grade == 'b') {
            ++bCount;
        } // end if

        if (grade == 'C' || grade == 'c') {
            ++cCount;
        } // end if

        if (grade == 'D' || grade == 'd') {
            ++dCount;
        } // end if

        if (grade == 'F' || grade == 'f') {
            ++fCount;
        } // end if

        if (grade == '\n' || grade == '\t' || grade == ' ') {
            ; // empty body
        } // end if

        if (grade != 'a' && grade != 'A' &&
            grade != 'b' && grade != 'B' &&
            grade != 'c' && grade != 'C' &&
            grade != 'd' && grade != 'D' &&
            grade != 'f' && grade != 'F' &&
            grade != '\n' && grade != '\t' && grade != ' ') {

            printf("%s", "Incorrect letter grade entered.");
            puts(" Enter a new grade.");
        } // end if
    } // end while

    // output summary of results
    puts("\nTotals for each letter grade are:");
    printf("A: %u\n", aCount);
    printf("B: %u\n", bCount);
    printf("C: %u\n", cCount);
    printf("D: %u\n", dCount);
    printf("F: %u\n", fCount);
} // end function main