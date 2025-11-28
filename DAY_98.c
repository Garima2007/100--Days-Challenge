// Q147: Store employee data in a binary file using fwrite() and read using fread().

/*
Sample Test Cases:
Input 1:
Employee details entered and stored in file.
Output 1:
Displays employee data read from file.

*/
#include <stdio.h>

struct Employee {
    char name[50];
    int id;
    float salary;
};

int main() {
    FILE *fp;
    struct Employee emp;

    printf("Enter employee details:\n");
    printf("Name: ");
    scanf("%s", emp.name);
    printf("ID: ");
    scanf("%d", &emp.id);
    printf("Salary: ");
    scanf("%f", &emp.salary);

    fp = fopen("employee.dat", "wb");
    if (fp == NULL) {
        printf("Error opening file.\n");
        return 1;
    }

    fwrite(&emp, sizeof(struct Employee), 1, fp);
    fclose(fp);

    fp = fopen("employee.dat", "rb");
    if (fp == NULL) {
        printf("Error opening file.\n");
        return 1;
    }

    fread(&emp, sizeof(struct Employee), 1, fp);
    fclose(fp);

    printf("Employee data read from file:\n");
    printf("Name: %s \n  ID: %d \n  Salary: %.2f\n", emp.name, emp.id, emp.salary);

    return 0;
}
