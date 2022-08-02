/*Write a recursive function to calculate the sum of all digits of a number entered by the
user.*/

#include <stdio.h>
int sum(int n)
{
    int rev=0;
    if(n>0)
    return n%10+sum(n/10);
    else
    return 0;
}
int main()
{
    int n;
    printf("Enter no\n");
    scanf("%d",&n);
    int res=sum(n);
    printf("Sum of al digits=%d",res);
}