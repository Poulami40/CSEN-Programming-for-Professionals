/*Write a program to calculate the average of two numbers.*/

#include <stdio.h>
int main()
{
    int n1,n2;
    float avg;
    printf("Enter 2 nos");
    scanf("%d %d",&n1,&n2);
    avg=(float)(n1+n2)/2;
    printf("Average=%.2f",avg);
}