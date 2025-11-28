// Q140: Define a struct with enum Gender and print person's gender.

/*
Sample Test Cases:
Input 1:
Gender=MALE
Output 1:
Male

*/
#include <stdio.h>

typedef enum
{
    MALE,
    FEMALE,
    OTHER
} Gender;

struct Person
{
    Gender gender;
};

int main()
{
    struct Person p;
    char input[10];

    printf("Enter Gender (MALE/FEMALE/OTHER): ");
    scanf("%s", input);

    if (strcmp(input, "MALE") == 0)
        p.gender = MALE;
    else if (strcmp(input, "FEMALE") == 0)
        p.gender = FEMALE;
    else
        p.gender = OTHER;

    if (p.gender == MALE)
        printf("Male");
    else if (p.gender == FEMALE)
        printf("Female");
    else
        printf("Other");

    return 0;
}
