// Q146: Create Employee structure with nested Date structure for joining date and print details.

/*
Sample Test Cases:
Input 1:
Employee: Raj | ID: 11 | Joining Date: 12 05 2020
Output 1:
Name: Raj | ID: 11 | Joining Date: 12/05/2020

*/
#include <stdio.h>
#include <string.h>

typedef enum { ELECTRONICS = 1, ACCESSORY, FOOD } Category;
typedef enum { NOT_IDENTICAL, IDENTICAL } CompareResult;

struct Item {
    int id;
    char name[20];
    float price;
    Category type;
};

CompareResult are_identical(struct Item item1, struct Item item2) {
    if (item1.id != item2.id)
        return NOT_IDENTICAL;

    if (item1.price != item2.price)
        return NOT_IDENTICAL;

    if (item1.type != item2.type)
        return NOT_IDENTICAL;

    if (strcmp(item1.name, item2.name) != 0)
        return NOT_IDENTICAL;

    return IDENTICAL;
}

int main() {
    struct Item a = {101, "Laptop", 1200.50, ELECTRONICS};
    struct Item b = {101, "Laptop", 1200.50, ELECTRONICS};
    struct Item c = {102, "Mouse", 25.00, ACCESSORY};

    if (are_identical(a, b) == IDENTICAL)
        printf("Struct a and Struct b are IDENTICAL.\n");
    else
        printf("Struct a and Struct b are NOT identical.\n");

    if (are_identical(a, c) == IDENTICAL)
        printf("Struct a and Struct c are IDENTICAL.\n");
    else
        printf("Struct a and Struct c are NOT identical.\n");

    return 0;
}
