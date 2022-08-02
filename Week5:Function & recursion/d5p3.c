/*Write a recursive function to calculate the GCD of two numbers*/

#include <stdio.h>
int gcd(int a,int b)
{
    if(a==0)
    return b;
    if(b==0)
    return a;
    if(b>a)
    return gcd(b%a,a);
    else if(a>b)
    return gcd(b,a%b);
}
int main()
{
    int n1,n2;
    printf("Enter nos\n");
    scanf("%d %d",&n1,&n2);
    int res=gcd(n1,n2);
    printf("GCD=%d",res);
}