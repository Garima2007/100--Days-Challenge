/* Q23: Write a program to calculate library fine based on late days as follows: 
First 5 days late: ₹2/day 
Next 5 days late: ₹4/day 
Next 20 days days late: ₹6/day 
More than 30 days: Membership Cancelled.
Sample Test Cases:
Input 1:
4
Output 1:
Fine ₹8

Input 2:
8
Output 2:
Fine ₹32

Input 3:
15
Output 3:
Fine ₹90

Input 4:
31
Output 4:
Membership Cancelled

*/
#include<stdio.h>
int main()
{
    int a, fine; // 'a' no. of late days
    printf("Enter value of a: ");
    scanf("%d", &a);
    if(a <= 5)
    {
        fine = 2 * a;
        printf("fine = %d", fine);
    }
    else if(a > 5 && a <= 10)
    {
        fine = 4 * a;
        printf("fine = %d", fine);
    }
    else if(a > 10 && a <= 30)
    {
        fine = 6 * a;
        printf("fine = %d", fine);
    }
    else
    {
        printf("Membership Cancelled");
    }
    return 0;
}
