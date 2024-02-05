#include<stdio.h>
#include<conio.h>
void main()
{
 char i=0,n=4,j;            // A
 do                         // B A
 {j=i;                      // C B A
 do                         // D C B A
 {                          // E D C B A
 printf("\t%c",j+65);
 j--;
 }while(j>=0);
 i++;
 printf("\n");
 }while(i<=n);

}