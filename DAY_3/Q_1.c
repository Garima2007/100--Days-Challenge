Q5: Write a program to convert temperature from Celsius to Fahrenheit.
#include<stdio.h>
int main()
{
    float C, F;   // F = fahrenheit    C = celcius
    printf(" Enter value of temperatue in celcius: ");
    scanf("%f", &C);
    F = (C * 9 / 5) + 32;
    printf("F = %.2f", F);
    return 0;
}
