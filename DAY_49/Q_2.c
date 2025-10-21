// Q98: Print initials of a name with the surname displayed in full.

/*
Sample Test Cases:
Input 1:
John David Doe
Output 1:
J.D. Doe

*/
#include <stdio.h>
#include <string.h>

int main()
{
    char name[100], words[10][20];
    int i, j = 0, k = 0, n;

    printf("Enter name: ");
    fgets(name, sizeof(name), stdin);

    name[strcspn(name, "\n")] = '\0';

    for (i = 0; name[i] != '\0'; i++)
    {
        if (name[i] == ' ')
        {
            words[k][j] = '\0';
            k++;
            j = 0;
        }
        else
        {
            words[k][j++] = name[i];
        }
    }
    words[k][j] = '\0';
    n = k + 1;

    for (i = 0; i < n - 1; i++)
        printf("%c.", words[i][0]);

    printf(" %s", words[n - 1]);

    return 0;
}
