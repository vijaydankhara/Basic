#include<stdio.h>
#include<conio.h>
void main()
{                                  //  * * * * *
 int i,j,k,n=5;                    //    * * * *                       
 i=n;                              //      * * *
 do                                //        * *
 {j=n;                             //          *
  k=1;
 do
 {
 printf(" ");
 j--;
 }while(j>=i);
do {printf("*");
     k++;
 }while(k<=i);
 printf("\n");
 i--;
 }while(i>=1);
 }