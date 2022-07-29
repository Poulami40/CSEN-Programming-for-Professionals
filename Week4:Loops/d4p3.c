/*Write an iterative program to find factorial of a single digit number. Your program should
also report the highest number up to which it can find the factorial successfully in your
system.*/

#include <stdio.h>
int main()
{
    int n,fac=1,c=1;
    printf("Enter no");
    scanf("%d",&n);
    for(int i=1;i<=n;i++)
    fac=fac*i;
    printf("Factorial of %d is %d\n",n,fac);
    fac=1;
int i=1;
while(1)
{
fac=fac*i;
if(fac/i!=c)
break;
else
c=fac;
i++;
}
printf("This program can print factorial upto %d\n",(i-1));
return 0;
}
