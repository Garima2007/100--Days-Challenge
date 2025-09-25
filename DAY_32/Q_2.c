Q64: Find the digit that occurs the most times in an integer number.
#include <stdio.h>

int main()
{
    long long n;
    int freq[10] = {0};
    int digit, i, maxDigit = 0;
    scanf("%lld", &n);
    if (n < 0)
        n = -n; // handle negative numbers
    while (n > 0)
    {
        digit = n % 10;
        freq[digit]++;
        n /= 10;
    }
    for (i = 0; i < 10; i++)
    {
        if (freq[i] > freq[maxDigit])
        {
            maxDigit = i;
        }
    }
    printf("%d\n", maxDigit);
    return 0;
}
