/*Consider a currency system in which there are notes of seven denominations, namely,
Re.1, Rs. 2, Rs.5, Rs.10, Rs. 50 and Rs. 100. If a sum of Rs. N is entered through the
keyboard, write a program to compute the smallest number of notes that will combine to
give Rs. N.*/

#include <stdio.h>
int main()
{
    int n;
    printf("Enter amt");
    scanf("%d",&n);
    printf("No of 100 notes=%d\n",n/100);
    n=n%100;
    printf("No of 50 notes=%d\n",n/50);
    n=n%50;
    printf("No of 10 notes=%d\n",n/10);
    n=n%10;
    printf("No of 5 notes=%d\n",n/5);
    n=n%5;
    printf("No of 2 notes=%d\n",n/2);
    n=n%2;
    printf("No of 1 notes=%d\n",n/1);
    n=n%1;
}