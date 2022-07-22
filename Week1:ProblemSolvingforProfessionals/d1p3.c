/*The method of computing the yearly depreciation of the value of an item is given by the
following equation:

Depreciation =(Purchase Price − Salvage Value)/Years of Service

Write a program to determine the salvage value of an item when the purchase price, years
of service and the annual depreciation are given by the user.*/

#include <stdio.h>
int main()
{
    float pp,sv,dep;
    int t;
    printf("Enter purchae price,depreciation and years of service");
    scanf("%f %f %d",&pp,&dep,&t);
    sv=pp-(dep*t);
    printf("Salvage value=%.2f",sv);
}