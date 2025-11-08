// Q18: Write a program to assign grades based on a percentage input.

/*
Sample Test Cases:
Input 1:
95
Output 1:
Grade A

Input 2:
82
Output 2:
Grade B

Input 3:
68
Output 3:
Grade D

Input 4:
50
Output 4:
Grade F

*/
#include<stdio.h>
int main()
{
    int n;
printf("Enter the value of n: ");
scanf("%d", &n);
if ( n >= 90 && n <= 100)
printf("GRADE A+");
else if ( n >= 80 && n < 90)
printf("GRADE A");
else if ( n >= 70 && n < 80)
printf("GRADE B");
else if ( n >= 60 && n < 70)
printf("GRADE C+");
else if ( n >= 50 && n < 60)
printf("GRADE C");
else if ( n >= 40 && n < 50)
printf("GRADE D");
else if ( n >= 33 && n < 40)
printf("PASS");
else
printf("Please try again");
return 0;
}
