#include<stdio.h>
#include<conio.h>
void main()
{                       // 1
 int i=1,j;             // 2 2
 do                     // 3 3 3
 {j=1;                  // 4 4 4 4
 do                     // 5 5 5 5 5
 {
 printf("\t%d",i);
 j++;
 }while(j<=i);
 i++;
 printf("\n");
 }while(i<=5);
}