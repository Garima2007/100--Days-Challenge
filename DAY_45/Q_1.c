Q89: Count frequency of a given character in a string.
#include <stdio.h>
int main()
{
    char A[100], ch;
    int i, count = 0;
    printf("Enter a string: ");
    fgets(A, sizeof(A), stdin);
    printf("Enter a character: ");
    scanf("%c", &ch);
    for (i = 0; A[i] != '\0'; i++)
    {
        if (A[i] == ch)
            count++;
    }
    printf("%d", count);
    return 0;
}
