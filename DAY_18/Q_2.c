// Q36: Write a program to find the HCF (GCD) of two numbers.

/*
Sample Test Cases:
Input 1:
12 18
Output 1:
6

Input 2:
7 9
Output 2:
1

*/
#include<stdio.h>
int main()
{
    int a, b, min, i, HCF;
    printf("Enter the value of a, b: ");
    scanf("%d %d", &a, &b);
    if(a > b)
    {
        min = b;
    }
    else
    {
        min = a;
    }
    for(i=1; i <= min; i++)
    {
        if(a % i == 0 && b % i == 0)
        {
            HCF = i;
        }
    }
    printf("HCF is %d\n ", HCF);
    return 0;
}
