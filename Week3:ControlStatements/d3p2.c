/*Write a program to find the roots (real and imaginary) of the quadratic equation of the
form ax2+ bx + c = 0.*/

#include <stdio.h>
#include <math.h>
int main()
{
    int a,b,c,d;
    float real=0.0,img=0.0,r1,r2;
    printf("Enter value of a b c\n");
    scanf("%d %d %d",&a,&b,&c);
    d=(b*b-(4*a*c));
    if(d>0)
    {
        r1=(-b+sqrt(d))/(2*a);
        r2=(-b-sqrt(d))/(2*a);
        printf("2 roots are %.2f and %.2f",r1,r2);
    }
    if(d=0)
    {
        r1=-b/(2*a);
        r2=-b/(2*a);
        printf("2 roots are %.2f and %.2f",r1,r2);
    }
    if(d<0)
    {
            real=-b/(2*a);
            img=-d;
            printf("2 roots are %.2f +i%.2f and %.2f +i%.2f",real,img,real,img);
    }

}