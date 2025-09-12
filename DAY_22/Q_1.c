Q43: Write a program to check if a number is a strong number.
#include<stdio.h>
int main()
{
    int n, a, d, fact, i, sum = 0;
    printf("Enter a number: ");
    scanf("%d", &n);
    a = n;
    while(a > 0)
    {
        d = a % 10;
        fact =1;
        for(i = 1; i <= d; i++)
        {
            fact *= i;
        }
    sum = sum + fact;
    a = a / 10;
    }
    if(sum == n)
    {
        printf("Strong number\n");
    }
    else
    {
        printf("Not a strong number");
    }
    return 0;
}
