#include<stdio.h>
#include<conio.h>
void main()
{
 int i=0,n=4,j;
 do                         // * 
 {j=i;                      // * * 
 do                         // * * *
 {                          // * * * * 
 printf("*");               // * * * * *
 j--;
 }while(j>=0);
 i++;
 printf("\n");
 }while(i<=n);
}