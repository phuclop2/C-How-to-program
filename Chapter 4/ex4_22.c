// Exercise 4.22 Solution
// Average Grade
#include <stdio.h>

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

        // determine which grade was input
        switch (grade) { // switch nested in while

        case 'A': // grade was uppercase A
        case 'a': // or lowercase a
            ++aCount;
            break; // necessary to exit switch

        case 'B': // grade was uppercase B
        case 'b': // or lowercase b
            ++bCount;
            break;

        case 'C': // grade was uppercase C
        case 'c': // or lowercase c
            ++cCount;
            break;

        case 'D': // grade was uppercase D
        case 'd': // or lowercase d
            ++dCount;
            break;

        case 'F': // grade was uppercase F
        case 'f': // or lowercase f
            ++fCount;
            break;

        case '\n': // ignore newlines,
        case '\t': // tabs,
        case ' ': // and spaces in input
            break;

        default: // catch all other characters
            printf("%s", "Incorrect letter grade entered.");
            puts(" Enter a new grade.");
            break; // optional; will exit switch anyway
        }
    } // end while

    // output summary of results
    puts("\nTotals for each letter grade are:");
    printf("A: %u\n", aCount);
    printf("B: %u\n", bCount);
    printf("C: %u\n", cCount);
    printf("D: %u\n", dCount);
    printf("F: %u\n", fCount);

    // calculate average grade
    double averageGrade =
        (4 * aCount + 3 * bCount + 2 * cCount + dCount) /
        (aCount + bCount + cCount + dCount + fCount);

    // output message for average grade
    if (averageGrade > 3.4) {
        puts("Average grade is A");
    } // end if
    else if (averageGrade > 2.4) {
        puts("Average grade is B");
    } // end if
    else if (averageGrade > 1.4) {
        puts("Average grade is C");
    } // end if
    else if (averageGrade > 0.4) {
        puts("Average grade is D");
    } // end if
    else {
        puts("Average grade is F");
    } // end else
} // end function main