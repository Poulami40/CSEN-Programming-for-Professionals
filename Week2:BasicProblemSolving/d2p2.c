/*Write a program which accepts retail price of a good and calculates the price to be
displayed on the product and a discounted price for the customer. The seller wants to
keep 15% profit over the retail price and wants that a 5% discount is given to the
customer. Then calculate and print the price that will be displayed on the product as well
as the discounted price that the customer has to pay.*/

#include <stdio.h>
int main()
{
    float rp,fp,dp,p,d;
    printf("Enter retail price");
    scanf("%f",&rp);
    p=0.15*rp;
    fp=rp+p;
    dp=100*(fp)/95;
    printf("Price displayed:%.2f  Price to be paid:%.2f",dp,fp);
}