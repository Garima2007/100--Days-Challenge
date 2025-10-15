// Q92: Find the first repeating lowercase alphabet in a string.

/*
Sample Test Cases:
Input 1:
stress
Output 1:
s

*/
#include <stdio.h>
int main()
{
    char A[100];
    int B[26] = {0}, i;
    printf("Enter a string: ");
    fgets(A, sizeof(A), stdin);
    for (i = 0; A[i] != '\0'; i++)
    {
        if (A[i] >= 'a' && A[i] <= 'z')
        {
            B[A[i] - 'a']++;
            if (B[A[i] - 'a'] == 2)
            {
                printf("%c", A[i]);
                return 0;
            }
        }
    }
    printf("No repeating character");
    return 0;
}
