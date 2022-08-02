/*Write a recursive function to print the first n Fibonacci numbers.*/

#include <stdio.h>
int fib(int a,int b,int n)
{
    if(n>0)
    {
        printf("%d ",a);
        return fib(b,a+b,n-1);
    }
    else return 0;
}
int main()
{
    int n,res;
    printf("Enter no");
    scanf("%d",&n);
    res=fib(0,1,n);
    
}