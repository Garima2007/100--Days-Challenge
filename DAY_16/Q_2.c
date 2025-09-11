// Q32: Write a program to check if a number is a palindrome.

/*
Sample Test Cases:
Input 1:
121
Output 1:
Palindrome

Input 2:
123
Output 2:
Not palindrome

*/
#include<stdio.h>
int main()
{
    int n, original, reverse = 0, digit;
    printf("Enter at least 2 digit number: ");
    scanf("%d", &n);

    original = n;  

    while (n > 0)
    {
        digit = n % 10;                 
        reverse = reverse * 10 + digit;  
        n = n / 10;                      
    }

    if (original == reverse)
    {
        printf("This is a pallindrome number");
    }
    else
    {
        printf("Not a pallindrome");
    }

    return 0;
}
