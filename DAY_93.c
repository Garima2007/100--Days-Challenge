// Q143: Find and print the student with the highest marks.

/*
Sample Test Cases:
Input 1:
3 students: Ravi 101 95, Sita 102 85, Aman 103 88
Output 1:
Topper: Ravi (Marks: 95)

*/
#include <stdio.h>

typedef enum { NOT_HIGHER, HIGHER } CompareResult;

struct Student {
    char name[50];
    int roll_no;
    int marks;
};

CompareResult is_higher(int a, int b) {
    return (a > b) ? HIGHER : NOT_HIGHER;
}

int main() {
    int n, i, topperIndex = 0;
    scanf("%d", &n);

    struct Student students[n];

    for (i = 0; i < n; i++) {
        scanf("%s", students[i].name);
        scanf("%d", &students[i].roll_no);
        scanf("%d", &students[i].marks);
    }

    for (i = 1; i < n; i++) {
        if (is_higher(students[i].marks, students[topperIndex].marks) == HIGHER)
            topperIndex = i;
    }

    printf("Topper: %s (Marks: %d)\n", students[topperIndex].name, students[topperIndex].marks);

    return 0;
}
