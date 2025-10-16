Q94: Find the longest word in a sentence.
#include <stdio.h>
#include <string.h>
int main()
{
    char A[200], word[50], longest[50];
    int i = 0, j = 0, max = 0;
    printf("Enter a sentence:\n");
    fgets(A, sizeof(A), stdin);
    A[strcspn(A, "\n")] = '\0';
    for (i = 0; i <= strlen(A); i++)
    {
        if (A[i] != ' ' && A[i] != '\0')
        {
            word[j++] = A[i];
        }
        else
        {
            word[j] = '\0';
            if (strlen(word) > max)
            {
                max = strlen(word);
                strcpy(longest, word);
            }
            j = 0;
        }
    }
    printf("%s", longest);
    return 0;
}
