/*Write a program to evaluate the summation of the following series, where the number of
terms N and independent variable X are taken as input from the user:
1-X/1! +X2/2! - X3/3! +...........*/

#include <stdio.h>
#include <math.h>
int main()
{
    int n,x,num=1,den=1,sum=0;
    printf("Enter value of n and x\n");
    scanf("%d %d",&n,&x);
    for(int i=0;i<n;i++)
    {
        num=num*pow(x,i);
        for(int k=i;k>=1;k--)
            den=den*k;
        if(i%2==0)
            sum=sum+(num/den);
        else
            sum=sum-(num/den);
    }
    printf("Sum=%d",sum);
}