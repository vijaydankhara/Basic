#include<stdio.h>
#include<conio.h>
void main()
{
 int i=1,n=1,j;
 do
 {j=1;
 do
 {
 printf("\t%d",n);
 if(n==0)
 {
 n=1;                    // 1
 }else                   // 0 1
 {                       // 0 1 0
 n=0;                    // 1 0 1 0
 }                       // 1 0 1 0 1
 j++;
 }while(j<=i);
 i++;
 printf("\n");
 }while(i<=5);
}