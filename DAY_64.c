Q114: Write a program to take a string s as input. The task is to find the length of the longest substring without repeating characters. Print the length as output.
#include <stdio.h>
#include <string.h>
int main() {
    char s[1000];
    printf("Enter string: ");
    scanf("%s", s);
    int lastIndex[256];
    for(int i = 0; i < 256; i++)
        lastIndex[i] = -1;
    int maxLen = 0, start = 0;
    int len = strlen(s);
    for(int i = 0; i < len; i++) {
        if(lastIndex[(unsigned char)s[i]] >= start) {
            start = lastIndex[(unsigned char)s[i]] + 1;
        }
        lastIndex[(unsigned char)s[i]] = i;
        int currLen = i - start + 1;
        if(currLen > maxLen) {
            maxLen = currLen;
        }
    }
    printf("%d\n", maxLen);
    return 0;
}
