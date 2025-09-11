// Q21: Write a program to display the month name and number of days using switch-case for a given month number.

/*
Sample Test Cases:
Input 1:
2
Output 1:
February, 28 days

Input 2:
12
Output 2:
December, 31 days

*/
#include<stdio.h>
int main()
{
    int a;
    printf(" Enter value of a(1-12): ");
    scanf("%d", &a);
    switch(a)
    {
        case 1:
        printf("JANUARY, 31 DAYS");
        break;
        case 2:
        printf("FEBRUARAY, 29 DAYS");
        break;
        case 3:
        printf("MARCH, 31 DAYS");
        break;
        case 4:
        printf("APRIL, 30 DAYS");
        break;
        case 5:
        printf("MAY, 31 DAYS");
        break;
        case 6:
        printf("JUNE, 30 DAYS");
        break;
        case 7:
        printf("JULY, 31 DAYS");
        break;
        case 8:
        printf("AUGUST, 31 DAYS");
        break;
        case 9:
        printf("SEPTEMBER, 30 DAYS");
        break;
        case 10:
        printf("OCTOBER, 31 DAYS");
        break;
        case 11:
        printf("NOVEMBER, 30 DAYS");
        break;
        case 12:
        printf("DECEMBER, 31 DAYS");
        break;
        default:
        printf("enter a valid number");
    }
    return 0;
}
