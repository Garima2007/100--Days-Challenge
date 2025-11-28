// Q145: Return a structure containing top student's details from a function.

/*
Sample Test Cases:
Input 1:
3 students: Riya 101 89, Karan 102 96, Meena 103 92
Output 1:
Top Student: Karan | Roll: 102 | Marks: 96

*/
#include <stdio.h>

enum Field { NAME, ROLL, MARKS };

struct Student {
    char name[50];
    int roll_no;
    int marks;
};

struct Student findTopper(struct Student students[], int n) {
    int i, topperIndex = 0;
    for (i = 1; i < n; i++) {
        if (students[i].marks > students[topperIndex].marks)
            topperIndex = i;
    }
    return students[topperIndex];
}

void printHeading(enum Field field) {
    switch(field) {
        case NAME:  printf("Name: ");   break;
        case ROLL:  printf("Roll: ");   break;
        case MARKS: printf("Marks: ");  break;
    }
}

int main() {
    int n, i;
    printf("Enter number of students: ");
    scanf("%d", &n);

    struct Student students[n];

    for (i = 0; i < n; i++) {
        printf("\n--- Enter details for Student %d ---\n", i + 1);

        printHeading(NAME);
        scanf("%s", students[i].name);

        printHeading(ROLL);
        scanf("%d", &students[i].roll_no);

        printHeading(MARKS);
        scanf("%d", &students[i].marks);
    }

    struct Student topper = findTopper(students, n);

    printf("\n--- Top Student Details ---\n");
    printf("Top Student: %s | Roll: %d | Marks: %d\n",
           topper.name, topper.roll_no, topper.marks);

    return 0;
}
