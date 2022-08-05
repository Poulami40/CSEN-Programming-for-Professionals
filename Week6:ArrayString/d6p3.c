/*Write a program to read a line of text from the keyboard and convert it into a coded text
by changing its characters by adding a code number to them. This code number must be
taken as input. For checking the correctness of your program, you should get your
original text back after encoding.*/

#include <stdio.h>
#include <string.h>
void encode(char str1[],int n,int l)
{
int i;
char ch=' ';
for(i=0;i<l;i++)
{
ch=str1[i]+n;
str1[i]=ch;
}
}
void decode(char str1[],int n,int l)
{
int i;
char ch=' ';
for(i=0;i<l;i++)
{
ch=str1[i]-n;
str1[i]=ch;
}
}
int main()
{
    char str1[100],ch;
int n,i,l;
printf("Enter string\n");
gets(str1);
l=strlen(str1);
printf("Enter coding no.\n");
scanf("%d",&n);
encode(str1,n,l);
printf("Encoded string:\n");
puts(str1);
decode(str1,n,l);
printf("Decoded string:\n");
puts(str1);
return 0;
}