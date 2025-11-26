// Q133: Create an enum for months and print how many days each month has.

/*
Sample Test Cases:
Input 1:
FEB
Output 1:
28 or 29 days

*/
#include <stdio.h>
#include <string.h>

enum Month { JANUARY, FEBRUARY, MARCH, APRIL, MAY, JUNE, JULY, AUGUST, SEPTEMBER, OCTOBER, NOVEMBER, DECEMBER };

int main() {
    char input[20];
    enum Month m;

    scanf("%s", input);

    if (strcmp(input, "JANUARY") == 0) m = JANUARY;
    else if (strcmp(input, "FEBRUARY") == 0) m = FEBRUARY;
    else if (strcmp(input, "MARCH") == 0) m = MARCH;
    else if (strcmp(input, "APRIL") == 0) m = APRIL;
    else if (strcmp(input, "MAY") == 0) m = MAY;
    else if (strcmp(input, "JUNE") == 0) m = JUNE;
    else if (strcmp(input, "JULY") == 0) m = JULY;
    else if (strcmp(input, "AUGUST") == 0) m = AUGUST;
    else if (strcmp(input, "SEPTEMBER") == 0) m = SEPTEMBER;
    else if (strcmp(input, "OCTOBER") == 0) m = OCTOBER;
    else if (strcmp(input, "NOVEMBER") == 0) m = NOVEMBER;
    else m = DECEMBER;

    switch (m) {
        case JANUARY: printf("31 days\n"); break;
        case FEBRUARY: printf("28 or 29 days\n"); break;
        case MARCH: printf("31 days\n"); break;
        case APRIL: printf("30 days\n"); break;
        case MAY: printf("31 days\n"); break;
        case JUNE: printf("30 days\n"); break;
        case JULY: printf("31 days\n"); break;
        case AUGUST: printf("31 days\n"); break;
        case SEPTEMBER: printf("30 days\n"); break;
        case OCTOBER: printf("31 days\n"); break;
        case NOVEMBER: printf("30 days\n"); break;
        case DECEMBER: printf("31 days\n"); break;
    }

    return 0;
}
