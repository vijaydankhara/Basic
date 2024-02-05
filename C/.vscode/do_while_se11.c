#include<stdio.h>
#include<conio.h>
void main()
{
 char i=1,j,a=65,s=90;
 do{j=1;
 do{
 if(j%2==1)
 {
 printf("\t%c",s++);
 a++;
 }else
 {
 printf("\t%c",a++);
 s++;
 }
 j++;
 }while(j<=i);
 i++;
 printf("\n");
 }while(i<=5);
 }
