// Q16: Write a program to input three numbers and find the largest among them using if–else.

/*
Sample Test Cases:
Input 1:
3 7 5
Output 1:
Largest is 7

Input 2:
-1 -5 0
Output 2:
Largest is 0

*/
#include<stdio.h>
int main()
{
    int a, b, c;
    printf("Enter value of a: ");
    scanf("%d", &a);
    printf("Enter value of b: ");
    scanf("%d", &b);
    printf("Enter value of c: ");
    scanf("%d", &c);
    if(a > c && a > b)
    printf(" Largest numberis %d", a);
    if( b > a && b > c)
    printf(" Largest numberis %d", b);
    else
    {
    printf(" Largest numberis %d", c);
    }
    return 0;
}
