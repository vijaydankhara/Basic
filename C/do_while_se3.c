#include<stdio.h>
#include<conio.h>
void main()
{                          // 11 12 13 14 15
int a=11,n;                // 21 22 23 24 25
do                         // 31 32 33 34 35
{                          // 41 42 43 44 45
printf("\t%d",a);          // 51 52 53 54 55
if(a%5==0)
{
printf("\n");
a=a+5;
}
a++;
}while(a<=55);
}
