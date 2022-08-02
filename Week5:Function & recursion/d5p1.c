/*Write a menu-driven program to –
 Calculate the factorial of a given number,
 Check whether the number is prime or not (Use square root approach),
 Check whether the number is a palindrome or not.
Use different functions for each of the above tasks and call the functions from main()
using switch statement.*/

#include <stdio.h>
#include <math.h>
#include <stdlib.h>
int factorial(int n)
{
    int fac=n;
    if(fac==0)
    return 1;
    else
    return fac*factorial(n-1);
}
int prime(int n)
{
    int r=sqrt(n);
    int c=0;
    for (int i =2;i<=r;i++)
    {
    if(n%i==0)
    c++;
    }
    return c;
}
int pal(int n)
{
    int no=n,f;
    int dig,rev=0;
    while(no!=0)
    {
        dig=no%10;
        rev=rev*10+dig;
        n=n/10;
    }
    if(rev==n)
    return 1;
    else
    return 0;
}
int main()
{
    int choice,res,n;
    printf("1.Factorial\n2.Prime\n3.Palindrome\n4.Exit\nEnter your choice\n");
scanf("%d",&choice);
if(choice==4)
{
printf("Exiting the program\n");
exit(0);
}
switch(choice)
{
case 1:
printf("Enter a no.\n");
scanf("%d",&n);
res=factorial(n);
printf("Factorial of %d=%d\n",n,res);
break;
case 2:
printf("Enter a no.\n");
scanf("%d",&n);
res=prime(n);
if(res==1)
printf("%d is prime\n",n);
else
printf("%d is not prime\n",n);
break;
case 3:
printf("Enter a no.\n");
scanf("%d",&n);
res=pal(n);
if(res==1)
printf("%d is palindrome\n",n);
else
printf("%d is not palindrome\n",n);
break;
}
}