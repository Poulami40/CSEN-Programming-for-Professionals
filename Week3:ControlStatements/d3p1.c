/*Write a program to input a student's score in a subject (out of hundred) and print a grade
as output as per the following rules:
i. Marks >= 90 --------- O
ii. 89>=Marks>=80 ------ E
iii. 79>=Marks>=70 ------ A
iv. 69>=Marks>=60 ------ B
v. 59>=Marks>=50 ------ C
vi. 49>=Marks>=40 ------ D
vii. 40>Marks ------ F*/

#include <stdio.h>
int main()
{
    int m;
    printf("Enter number\n");
    scanf("%d",&m);
    if(m>100||m<0)
        printf("Invalid");
    else if (m>=90)
        printf("O");
    else if (m<=89&&m>=80)
        printf("E");
    else if(m<=79&&m>=70)
        printf("A");
    else if(m<=69&&m>=60)
        printf("B");
    else if(m<=59&&m>=50)
        printf("C");
    else if(m<=49&&m>=40)
        printf("D");
    else
        printf("F");
    
}