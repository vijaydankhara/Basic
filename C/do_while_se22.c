#include<stdio.h>
#include<conio.h>
void main()
{                                  //       *
 int i,j;                          //      * *
 int n=5;                          //     * * *
 i=1;                              //    * * * *
 do                                //   * * * * *
 {j=n;                             //   * * * * *
 do                                //    * * * *
{ if(i>=j)                         //     * * *
 printf("* ");                     //      * *
 else                              //       *

 printf(" ");

 j--;
 }while(j>=1);
 printf("\n");
 i++;
 }while(i<=n);

 i=n;
 do{j=n;
 do{
 if(i>=j)
 printf("* ");
 else
 printf(" ");
 j--;
 }while(j>=1);
 printf("\n");
 i--;
 }while(i>=1);
 
 }