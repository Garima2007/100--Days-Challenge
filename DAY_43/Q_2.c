Q86: Check if a string is a palindrome.
#include <stdio.h>
#include <string.h>
int main()
{
    char str[100];
    int i, j, flag = 0;
    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin);
    str[strcspn(str, "\n")] = '\0';
    j = strlen(str) - 1;
    for (i = 0; i < j; i++, j--)
    {
        if (str[i] != str[j])
        {
            flag = 1;
            break;
        }
    }
    if (flag == 0)
        printf("Palindrome");
    else
        printf("Not palindrome");
    return 0;
}
