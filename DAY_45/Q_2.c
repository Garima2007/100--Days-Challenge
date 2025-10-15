Q90: Toggle case of each character in a string.
#include <stdio.h>
int main()
{
    char A[100];
    int i;
    printf("Enter a string: ");
    fgets(A, sizeof(A), stdin);
    for (i = 0; A[i] != '\0'; i++)
    {
        if (A[i] >= 'a' && A[i] <= 'z')
            A[i] = A[i] - 32;
        else if (A[i] >= 'A' && A[i] <= 'Z')
            A[i] = A[i] + 32;
    }
    printf("%s", A);
    return 0;
}
