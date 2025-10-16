Q93: Check if two strings are anagrams of each other.
#include <stdio.h>
#include <string.h>
int main()
{
    char A[100], B[100];
    int freq1[256] = {0}, freq2[256] = {0}, i;
    printf("Enter first string:\n");
    scanf("%s", A);
    printf("Enter second string:\n");
    scanf("%s", B);
    if (strlen(A) != strlen(B))
    {
        printf("Not anagrams");
        return 0;
    }
    for (i = 0; A[i] != '\0'; i++)
    {
        freq1[A[i]]++;
        freq2[B[i]]++;
    }
    for (i = 0; i < 256; i++)
    {
        if (freq1[i] != freq2[i])
        {
            printf("Not anagrams");
            return 0;
        }
    }
    printf("Anagrams");
    return 0;
}
