/*Write a program to input temperature in Celsius scale and convert it to Fahrenheit.
Display the result.*/

#include <stdio.h>
int main()
{
    float tc,tf;
    printf("Enter temp in celcius");
    scanf("%f",&tc);
    tf=(9*tc/5)+32;
    printf("Temp in farenheit is %.f",tf);
}