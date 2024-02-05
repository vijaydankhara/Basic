// 2 2 2 2 2 to 10 10 10 10 10
#include<stdio.h>
#include<conio.h>
void main()
{                     
 int i,j,n=5,a=2;            
 
 i=1;
while(i<=n)
{
j=1;
while(j<=n)
{
printf("\t%d",a);
j++;
}
a=a+2;
printf("\n");
i++;
}

 }