// Q150: Use pointer to struct to modify and display data using -> operator.

/*
Sample Test Cases:
Input 1:
Student pointer modifying values: John 106 91
Output 1:
Modified Data: Name: John | Roll: 106 | Marks: 91

*/
#include <stdio.h>
#include <stdlib.h>

typedef enum { NAME, ROLL, MARKS } Field;

struct Student {
    char name[50];
    int roll;
    int marks;
};

int main() {
    struct Student *ptr = (struct Student*)malloc(sizeof(struct Student));
    Field f1 = NAME, f2 = ROLL, f3 = MARKS;

    printf("Enter Name Roll Marks: ");
    scanf("%s %d %d", ptr->name, &ptr->roll, &ptr->marks);

    if(f1 == NAME && f2 == ROLL && f3 == MARKS) {
        printf("Modified Data: Name: %s | Roll: %d | Marks: %d",
               ptr->name, ptr->roll, ptr->marks);
    }

    free(ptr);
    return 0;
}