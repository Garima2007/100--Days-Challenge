// Q148: Take two structs as input and check if they are identical.

/*
Sample Test Cases:
Input 1:
Student1: Asha 101 90
Student2: Asha 101 90
Output 1:
Same

*/
#include <stdio.h>
#include <string.h>

enum Field { NAME, ROLL, MARKS };

struct Student {
    char name[50];
    int roll_no;
    int marks;
};

void printHeading(enum Field f) {
    switch(f) {
        case NAME:  printf("Name: ");  break;
        case ROLL:  printf("Roll: ");  break;
        case MARKS: printf("Marks: "); break;
    }
}

int main() {
    struct Student s1, s2;

    printf("----- Enter Student 1 Details -----\n");
    printHeading(NAME);
    scanf("%s", s1.name);

    printHeading(ROLL);
    scanf("%d", &s1.roll_no);

    printHeading(MARKS);
    scanf("%d", &s1.marks);

    printf("\n----- Enter Student 2 Details -----\n");
    printHeading(NAME);
    scanf("%s", s2.name);

    printHeading(ROLL);
    scanf("%d", &s2.roll_no);

    printHeading(MARKS);
    scanf("%d", &s2.marks);

    printf("\n----- Result -----\n");
    if (strcmp(s1.name, s2.name) == 0 &&
        s1.roll_no == s2.roll_no &&
        s1.marks == s2.marks)
        printf("Same\n");
    else
        printf("Different\n");

    return 0;
}
