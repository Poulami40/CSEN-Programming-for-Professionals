/*      1
      2 3 2
    3 4 5 4 3
  4 5 6 7 6 5 4
5 6 7 8 9 8 7 6 5  */

#include <stdio.h>
int main()
{
    int n,mid,term;
    printf("Enter no of lines\n");
    scanf("%d",&n);
    for(int i=1;i<=n;i++)
    {
        term=i;
        mid=(i*2)-1;
        for(int k=i;k<=n-1;k++)
            printf(" ");
        for(int m=1;m<=mid;m++)
        {
            printf("%d",term);
        
        if(m<=mid/2)
            term++;
        else
            term--;
        }
        printf("\n");
    }
}