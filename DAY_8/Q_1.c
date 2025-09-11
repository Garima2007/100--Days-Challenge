// Q15: Write a program to input a character and check whether it is an uppercase alphabet, lowercase alphabet, digit, or special character.

/*
Sample Test Cases:
Input 1:
A
Output 1:
Uppercase alphabet

Input 2:
a
Output 2:
Lowercase alphabet

Input 3:
3
Output 3:
Digit

Input 4:
#
Output 4:
Special character

*/
#include<stdio.h>
int main()
{
    char n;
    printf("Enter value of n: ");
    scanf("%c", &n);
    
    if ( n >= 'A' && n <= 'Z')
    {
        printf("Uppercase alphabet");
    }
    else if( n >= 'a' && n <= 'z')
    {
    printf("Lowercase alphabet");
    }
    else if(n >= '0' && n <= '10')
    {
        printf("Digit");
    }
    else
    {
        printf("special character");
    }
    return 0;
}
