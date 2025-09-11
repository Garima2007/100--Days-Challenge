// Q20: Write a program to display the day of the week based on a number (1–7) using switch-case.

/*
Sample Test Cases:
Input 1:
1
Output 1:
Monday

Input 2:
5
Output 2:
Friday

*/
#include<stdio.h>
int main()
{
    int  b;
    printf("Enter value of b(1-7): ");
    scanf("%d", &b);
    switch(b)
    {
    case 1:
    printf("SUNDAY");
    break;
    case 2:
    printf("MONDAY");
    break;
    case 3:
    printf("TUESDAY");
    break;
    case 4:
    printf("WEDNESDAY");
    break;
    case 5:
    printf("THURSDAY");
    break;
    case 6:
    printf("FRIDAY");
    break;  
    case 7:
    printf("SATURDAY");
    break;
    default:
    printf("Enter a valid input");
       }
          return 0;
}
