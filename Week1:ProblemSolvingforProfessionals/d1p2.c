/*Write a program to assign the number 34.5678 to a variable named number. First display
number rounded to the nearest integer value and then display number rounded to two
decimal places*/

#include <stdio.h>
int main()
{
    float number=34.5678;
    printf("%d\n",(int)number);
    printf("%.2f",number);
    return 0;
}