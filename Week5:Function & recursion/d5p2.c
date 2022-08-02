/*Write a recursive function to convert a decimal integer, taken as input, to its octal
equivalent.*/

#include <stdio.h>
int octal(int n)
{
    int rev=0;
    if(n==0)
    return 0;
    else
    return ((n%8)+octal(n/8)*10);
}
int main()
{
    int n;
    printf("\nEnter no");
    scanf("%d",&n);
    int res=octal(n);
    printf("\nOctal=%d",res);
}