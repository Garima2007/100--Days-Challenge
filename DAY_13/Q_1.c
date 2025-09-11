/* Q25: Write a program to implement a basic calculator using switch-case for +, -, *, /, %.

Sample Test Cases:
Input 1:
4 2 +
Output 1:
6

Input 2:
10 3 %
Output 2:
1

Input 3:
15 5 /
Output 3:
3

*/
#include<stdio.h>
int main()
{
    int a, b, ans;
    char n;
    printf("Enter value of a: ");
    scanf("%d", &a);
    printf("Enter value of b: ");
    scanf("%d", &b);
    printf("Enter value of n( +, -, *, /): ");
    scanf(" %c", &n);
    switch(n)
    {
        case '+':
        printf("ans = %d",(a + b));
        break;
        case '-':
        printf("ans = %d", (a - b));
        break;
        case '*':
        printf("ans = %d", (a * b));
        break;
        case '/':
        if(b != 0)
        {
        printf("ans = %d", (a / b));
        }
        break;
        case '%':
        printf("ans = %d", (a % b));
        break;
        default:
        printf("Enter a valid operator");
    }
    return 0;
}
