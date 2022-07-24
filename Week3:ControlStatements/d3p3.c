/*Develop a simple calculator to accept two floating point numbers from the key-board.
Then display a menu to the user and let him/her select a mathematical operation to be
performed on those two numbers. Then display the answer. A sample run of your
program should be similar to the following:
Enter number 1: 20
Enter number 2: 12
Mathematical Operations:
1 – Add
2 - Subtract
3 - Multiply
4 - Divide
Enter your preference: 2
Answer: 8.00*/

#include <stdio.h>
#include <stdlib.h>
int main()
{
    float a,b;
    int ch;
    printf("Enter number 1\n");
    scanf("%f",&a);
    printf("Enter number 2\n");
    scanf("%f",&b);
    printf("Mathematical Operations:\n1 - Add\n2 - Subtract\n3 - Multiply\n4 - Divide\nEnter your preference:\n");
    scanf("%d",&ch);
    
    
    if(ch==1)
        printf("%.2f",a+b);
    else if(ch==2)
        printf("%.2f",a-b);
    else if(ch==3)
        printf("%.2f",a*b);
    else if(ch==4)
        printf("%.2f",a/b);
    else if(ch==5)
        exit(0);
    else
        printf("Invalid choice");
    
}