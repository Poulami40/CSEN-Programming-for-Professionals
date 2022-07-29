/*Write a program to print the sum of the following harmonic series for a given value of n:
1+1/2+1/3+.....+1/n*/

#include <stdio.h>
int main()
{
    int n;
    double sum=0.0;
    printf("Enter value of n\n");
    scanf("%d",&n);
    for(int i=1;i<=n;i++)
    sum=(double)sum+(1.0/i);
    printf("\nSum of series=%.2f",sum);
}