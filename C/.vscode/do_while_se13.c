#include<stdio.h>
#include<conio.h>
void main()
{                       // 5
 int i=5,j;             // 4 5         
 do                     // 3 4 5
 {j=i;                  // 2 3 4 5
 do                     // 1 2 3 4 5
 {
 printf("\t%d",j);
 j++;
 }while(j<=5);
 i--;
 printf("\n");
 }while(i>=1);
}