// Q149: Use malloc() to allocate structure memory dynamically and print details.

/*
Sample Test Cases:
Input 1:
Student allocated dynamically with details: Tina 105 88
Output 1:
Name: Tina | Roll: 105 | Marks: 88

*/
#include <stdio.h>
#include <stdlib.h>

typedef enum {NAME, ROLL, MARKS} Field;

struct Student {
    char name[50];
    int roll;
    int marks;
};

int main() {
    struct Student *s;
    s = (struct Student*)malloc(sizeof(struct Student));

    printf("Enter Name Roll Marks: ");
    scanf("%s %d %d", s->name, &s->roll, &s->marks);

    Field f1 = NAME, f2 = ROLL, f3 = MARKS;

    if(f1 == NAME && f2 == ROLL && f3 == MARKS) {
        printf("Name: %s | Roll: %d | Marks: %d", s->name, s->roll, s->marks);
    }

    free(s);
    return 0;
}
