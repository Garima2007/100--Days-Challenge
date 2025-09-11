/* Q24: Write a program to calculate electricity bill based on units consumed with these rates: 
First 100 units at ₹5/unit 
Next 100 units at ₹7/unit 
Next 100 units at ₹10/unit 
Above at ₹12/unit

Sample Test Cases:
Input 1:
50
Output 1:
Bill: ₹250

Input 2:
150
Output 2:
Bill: ₹850

Input 3:
250
Output 3:
Bill: ₹1700

*/
#include<stdio.h>
int main()
{
    int a, bill; // 'a' no. units  consumed
    printf("Enter value of a: ");
    scanf("%d", &a);
    if( a <= 100)
    {
        bill = 5 * a;
        printf("bill =%d", bill);
    }
    else if(a > 100 && a <= 200)
    {
        bill = 7 * a;
        printf(" bill = %d", bill);
    }
    else if(a > 200 && a <= 300)
    {
        bill = 10 * a;
        printf("bill = %d", bill);
    }
    else
    {
        bill = 12 * a;
        printf("bill = %d",bill);
    }
    return 0;
}
