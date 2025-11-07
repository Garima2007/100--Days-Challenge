// Q100: Print all sub-strings of a string.
#include <stdio.h>
#include <string.h>
int main() 
{
    char s[100];
    int i, j, len;
    printf("Enter a string: ");
    scanf("%s", s);
    len = strlen(s);
    for(i = 0; i < len; i++) 
    {
        for(j = i; j < len; j++) 
        {
            for(int k = i; k <= j; k++) 
            {
                printf("%c", s[k]);
            }
            if(!(i == len - 1 && j == len - 1))
                printf(",");
        }
    }
    return 0;
}
