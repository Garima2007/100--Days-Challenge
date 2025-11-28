// Q147: Store employee data in a binary file using fwrite() and read using fread().

/*
Sample Test Cases:
Input 1:
Employee details entered and stored in file.
Output 1:
Displays employee data read from file.

*/
#include <stdio.h>
#include <string.h>

struct Item {
    int id;
    char name[20];
    float price;
};

typedef enum {
    NOT_IDENTICAL,
    IDENTICAL
} CompareResult;

CompareResult are_identical(struct Item item1, struct Item item2) {
    if (item1.id != item2.id) {
        return NOT_IDENTICAL;
    }
    if (item1.price != item2.price) {
        return NOT_IDENTICAL;
    }
    if (strcmp(item1.name, item2.name) != 0) {
        return NOT_IDENTICAL;
    }
    return IDENTICAL;
}

int main() {
    struct Item a = {101, "Laptop", 1200.50};
    struct Item b = {101, "Laptop", 1200.50};
    struct Item c = {102, "Mouse", 25.00};

    if (are_identical(a, b) == IDENTICAL) {
        printf("Struct a and Struct b are IDENTICAL.\n");
    } else {
        printf("Struct a and Struct b are NOT identical.\n");
    }

    if (are_identical(a, c) == IDENTICAL) {
        printf("Struct a and Struct c are IDENTICAL.\n");
    } else {
        printf("Struct a and Struct c are NOT identical.\n");
    }

    return 0;
}
