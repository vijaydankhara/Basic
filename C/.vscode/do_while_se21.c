#include<stdio.h>
#include<conio.h>
void main()
{                                  //  * * * * *
 int i,j,n=5;                      //   * * * *
 i=n;                              //    * * *
 do                                //     * *
 {j=n;                             //      *
 do
{ if(i>=j)
 printf("* ");
 else

 printf(" ");

 j--;
 }while(j>=1);
 printf("\n");
 i--;
 }while(i>=1);
 }