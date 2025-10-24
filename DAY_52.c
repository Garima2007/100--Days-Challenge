Q102: Write a Program to take a sorted array arr[] and an integer x as input, find the index (0-based) of the smallest element in arr[] that is greater than or equal to x and print it. This element is called the ceil of x. If such an element does not exist, print -1. Note: In case of multiple occurrences of ceil of x, return the index of the first occurrence.
#include <stdio.h>
int main()
{
    int n = 6, x;  // n is number of elements
    int arr[n];
    printf("Enter x: ");
    scanf("%d", &x);
    printf("Enter elements (sorted): ");
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }
    
    int ceil = -1;
    for (int i = 0; i < n; i++)
    {
        if (arr[i] >= x)
        {
            ceil = i;
        }
    }
    printf("%d\n", ceil);
    return 0;
}
