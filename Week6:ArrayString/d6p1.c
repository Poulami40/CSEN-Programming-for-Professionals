/*Write a menu driven program to find the max, min, average, standard deviation of the
elements of an integer array using separate functions*/

#include <stdio.h>
#include <math.h>
int max(int a[],int n)
{
    int max=a[0],t;
    for(int i=0;i<n;i++)
    {
        if(a[i]>max)
        {
            
            max=a[i];
        }
    }
    return max;
}
int min(int a[],int n)
{
    int min=a[0];
    for(int i=0;i<n;i++)
    {
        if(a[i]<min)
        {
            
            min=a[i];
        }
    }
    return min;
}
double avg(int a[],int n)
{
    int s=0;
    for (int i = 0; i < n; i++)
    {
        /* code */
        s=s+a[i];
    }
    double avg=(double)s/n;
    return avg;
}
double sd(int a[],int n,double av)
{
    int s=0;
    double d;
    for(int i=0;i<n;i++)
    {
        s=s+(a[i]-av)*(a[i]-av);
    }
    d=sqrt(s);
    return d;
}
int main()
{
    int n,i,choice,a[100];
double avgm=0.0,s=0.0;
while(1)
{
printf("1.Max\n2.Min\n3.Average\n4.Standard deviation\n5.Exit\n");
printf("Enter your choice\n");
scanf("%d",&choice);
if(choice==5)
break;
switch(choice)
{
case 1:
printf("Enter no. of elements\n");
scanf("%d",&n);
printf("Enter array elements\n");
for(i=0;i<n;i++)
scanf("%d",&a[i]);
int maxm=max(a,n);
printf("Max=%d\n",maxm);
break;
case 2:
printf("Enter no. of elements\n");
scanf("%d",&n);
printf("Enter array elements\n");
for(i=0;i<n;i++)
scanf("%d",&a[i]);
int minm=min(a,n);
printf("Min=%d\n",minm);
break;
case 3:
printf("Enter no. of elements\n");
scanf("%d",&n);
printf("Enter array elements\n");
for(i=0;i<n;i++)
scanf("%d",&a[i]);
avgm=avg(a,n);
printf("Average=%f\n",avgm);
break;
case 4:
printf("Enter no. of elements\n");
scanf("%d",&n);

printf("Enter array elements\n");
for(i=0;i<n;i++)
scanf("%d",&a[i]);
avgm=avg(a,n);
s=sd(a,avgm,n);
printf("Standard deviation=%f\n",s);
break;
default:printf("Invalid input\n");
}
}
return 0;
}