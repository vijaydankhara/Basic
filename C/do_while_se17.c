#include<stdio.h>
#include<conio.h>
void main()
{
 int i=5,j;                         // * * * * *
 do                                 // * * * *
 {j=1;                              // * * *
 do                                 // * *
 {                                  // *
 printf("*");
 j++;
 }while(j<=i);
 i--;
 printf("\n");
 }while(i>0);
}