#include<stdio.h>
#include<conio.h>
void main()
{
 int i=5,j;
 do
 {j=5;                      // 5
 do                         // 4 4
 {                          // 3 3 3
 printf("\t%d",i);          // 2 2 2 2
 j--;                       // 1 1 1 1 1
 }while(j>=i);
 i--;
 printf("\n");
 }while(i>=1);
}