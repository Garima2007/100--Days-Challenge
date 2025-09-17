Q55: Write a program to print all the prime numbers from 1 to n.

#include<stdio.h>
int main()
{
    int i, n, j, a;
    printf("Enter value of n: ");
    scanf("%d", &n);

    for (i = 2; i <= n; i++)  
    {
        a = 1; // assume prime

        for (j = 2; j < i; j++)  
        {
            if (i % j == 0)  
            {
        a = 0;
                break;
            }
        }

        if (a == 1)  
        {
            printf("%d ", i);
        }
    }
    return 0;
}
