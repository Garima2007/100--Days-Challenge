Q49: Write a program to print the following pattern:
#include<stdio.h>
int main() {
    int n, i, j;
    printf("enter value: ");
    scanf("%d", &n);
    for(i=n; i >= 1; i--)
    {
    for(j=i; j <= n; j++)
    {
        printf("%d ", j);
}
    printf("\n");
}
    return 0;
}
