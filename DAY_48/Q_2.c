Q96: Reverse each word in a sentence without changing the word order.
#include <stdio.h>
#include <string.h>

int main()
{
    char A[200];
    int i, start = 0, end, len;
    printf("Enter a sentence:\n");
    fgets(A, sizeof(A), stdin);
    A[strcspn(A, "\n")] = '\0';

    len = strlen(A);
    for (i = 0; i <= len; i++)
    {
        if (A[i] == ' ' || A[i] == '\0')
        {
            end = i - 1;
            while (start < end)
            {
                char t = A[start];
                A[start] = A[end];
                A[end] = t;
                start++;
                end--;
            }
            start = i + 1;
        }
    }

    printf("%s", A);
    return 0;
}
