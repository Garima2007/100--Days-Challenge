Q95: Check if one string is a rotation of another.
#include <stdio.h>
#include <string.h>

int main()
{
    char A[100], B[100], temp[200];
    printf("Enter first string:\n");
    scanf("%s", A);
    printf("Enter second string:\n");
    scanf("%s", B);

    if (strlen(A) != strlen(B))
    {
        printf("Not rotation");
        return 0;
    }

    strcpy(temp, A);
    strcat(temp, A);

    if (strstr(temp, B) != NULL)
        printf("Rotation");
    else
        printf("Not rotation");

    return 0;
}
