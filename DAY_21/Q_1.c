// Q41: Write a program to swap the first and last digit of a number.

/*
Sample Test Cases:
Input 1:
1234
Output 1:
4231

Input 2:
1001
Output 2:
1001

*/
#include <stdio.h>
int main() {
    int num, firstDigit, lastDigit, temp, digits = 0;
    int power = 1;
    printf("Enter a number: ");
    scanf("%d", &num);
    temp = num;
    lastDigit = num % 10;
    while(temp >= 10) {
        temp /= 10;
        digits++;
        power *= 10;
    }
    firstDigit = temp;
    if(num < 10) {
        printf("Swapped number: %d\n", num);
        return 0;
    }
    int middle = (num % power) / 10;
    int swapped = lastDigit * power + middle * 10 + firstDigit;
    printf("Swapped number: %d\n", swapped);
    return 0;
}
