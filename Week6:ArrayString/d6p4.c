/*Write a program to find whether a given matrix is upper triangular or lower triangular.*/

#include <stdio.h>
int checkupper(int a[][10],int n)
{
int i,j,flag=1;
for(i=0;i<n;i++)
{
for(j=0;j<n;j++)
{
if(j<i)
if(a[i][j]!=0)
{
flag=0;
break;
}
}
if(flag==0)
break;
}
return flag;
}
int checklower(int a[][10],int n)
{
int i,j,flag=1;
for(i=0;i<n;i++)
{
for(j=0;j<n;j++)

{
if(j>i)
if(a[i][j]!=0)
{
flag=0;
break;
}
}
if(flag==0)
break;
}
return flag;
}
int main()
{
    int a[10][10],n,i,j,u,l;
printf("Enter no. of rows and columns\n");
scanf("%d",&n);
printf("Enter array elements\n");
for(i=0;i<n;i++)
{
for(j=0;j<n;j++)
scanf("%d",&a[i][j]);
}
printf("Matrix:\n");
for(i=0;i<n;i++)
{
for(j=0;j<n;j++)
printf("%d\t",a[i][j]);
printf("\n");
}
u=checkupper(a,n);
l=checklower(a,n);
if(u==1 && l==1)
printf("Both upper and lower triangular\n");
else if(u==1 && l==0)
printf("Upper triangular");
else if(u==0 && l==1)
printf("Lower triangular");
else
printf("Neither upper nor lower triangular");
return 0;
}
