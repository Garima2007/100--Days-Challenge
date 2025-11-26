// Q134: Define an enum with SUCCESS, FAILURE, and TIMEOUT, and print messages accordingly.

/*
Sample Test Cases:
Input 1:
FAILURE
Output 1:
Operation failed

*/
#include <stdio.h>
#include <string.h>

enum Status { SUCCESS, FAILURE, TIMEOUT };

int main() {
    char input[20];
    enum Status s;

    scanf("%s", input);

    if (strcmp(input, "SUCCESS") == 0) s = SUCCESS;
    else if (strcmp(input, "FAILURE") == 0) s = FAILURE;
    else s = TIMEOUT;

    if (s == SUCCESS)
        printf("Operation successful\n");
    else if (s == FAILURE)
        printf("Operation failed\n");
    else
        printf("Operation timed out\n");

    return 0;
}
