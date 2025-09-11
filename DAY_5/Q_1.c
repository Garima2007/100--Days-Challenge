Q9: Write a program to calculate simple and compound interest for given principal, rate, and time.
#include<stdio.h>
int main()
{
    float principal, rate, time, simpleinterest, compoundinterest;
    printf("Enter values of principal, rate, time: ");
    scanf("%f %f %f", &principal, &rate, &time);
    simpleinterest = (principal * rate * time) / 100;
    compoundinterest = principal *pow((1 + rate/100),time) - principal;
    printf("simpleinterest= %f, compondinterest= %f\n", simpleinterest, compoundinterest); // %.2f is to print for 2 decimal places
return 0;
}
