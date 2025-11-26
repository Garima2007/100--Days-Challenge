// Q136: Use enum to represent menu choices (ADD, SUBTRACT, MULTIPLY) and perform operations using switch.

/*
Sample Test Cases:
Input 1:
ADD 10 20
Output 1:
30

*/
#include <stdio.h>
#include <string.h>

enum Choice { ADD, SUBTRACT, MULTIPLY };

int main() {
    char input[20];
    int a, b, result;
    enum Choice c;

    scanf("%s %d %d", input, &a, &b);

    if (strcmp(input, "ADD") == 0) c = ADD;
    else if (strcmp(input, "SUBTRACT") == 0) c = SUBTRACT;
    else c = MULTIPLY;

    switch (c) {
        case ADD: result = a + b; break;
        case SUBTRACT: result = a - b; break;
        case MULTIPLY: result = a * b; break;
    }

    printf("%d\n", result);
    return 0;
}
