/*Write a program to find the number of digits in a number entered through the keyboard.
Also find the sum of the digits of that number and check whether that number is a
palindrome or not*/

#include <stdio.h>
int main()
{
    int n,dig,pal=0,c=0,no,sum=0;
    printf("Enter no\n");
    scanf("%d",&no);
    n=no;
    while(n!=0)
    {
        dig=n%10;
        pal=pal*10+dig;
        c++;
        sum=sum+dig;
        n=n/10;
    }
    if(pal==no)
    printf("Palindrome\n");
    else
    printf("Not palindrome\n");
    printf("No of digits=%d\n",c);
    printf("Sum of digits=%d\n",sum);
}