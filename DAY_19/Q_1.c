//Q37: Write a program to find the LCM of two numbers.

/*
Sample Test Cases:
Input 1:
4 5
Output 1:
20

Input 2:
7 3
Output 2:
21

*/
#include<stdio.h>
int main()
{
    int a, b, max, i, LCM=1;
    printf("Enter the value of a, b: ");
    scanf("%d %d", &a, &b);
    if(a > b)
    {
        max = a;
    }
    else
    {
        max = b;
    }
    for(i=max; i <= a*b; i+= max)
    {
        if(i%a == 0 && i%b ==0)
        {
            LCM = i;
            break;
        }
    }
    printf("LCM is %d\n ", LCM);
    return 0;
}
