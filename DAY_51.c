Q101: Write a Program to take a sorted array(say nums[]) and an integer (say target) as inputs. The elements in the sorted array might be repeated. You need to print the first and last occurrence of the target and print the index of first and last occurrence. Print -1, -1 if the target is not present.
#include <stdio.h>
int main()
{
    int n = 6, target = 0, first = -1, last = -1; // n is number of elements
    printf("Enter target: ");
    scanf("%d", &target);
    int num[n];
    printf("Enter elements (sorted): ");
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &num[i]);
    }
    for (int i = 0; i < n; i++)
    {
        if (num[i] == target)
        {
            first = i;
            break;
        }
    }
    for (int i = n - 1; i >= 0; i--)
    {
        if (num[i] == target)
        {
            last = i;
            break;
        }
    }
    if (first == -1)
        printf("-1, -1\n");
    else
        printf("%d, %d\n", first, last);
    return 0;
}
