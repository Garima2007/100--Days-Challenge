// Q30: Write a program to reverse a given number.

/*
Sample Test Cases:
Input 1:
1234
Output 1:
4321

Input 2:
100
Output 2:
1

*/
#include<stdio.h>
int main()
{
    int n, a, i, reverse=0, original;
    printf("Enter the valuee of n: ");
    scanf("%d", &n);
    original = n; 
    while (n != 0)
    {
        a = n % 10;
        reverse = reverse * 10 + a;
        n = n / 10;
    }
    printf(" Reverse of %d is %d",original, reverse);
    return 0;
}
