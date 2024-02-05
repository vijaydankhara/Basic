// 3 3 3 3 3 to 9 9 9 9 9
#include<stdio.h>
#include<conio.h>
void main()
{                      
 int i,j,n=5,a=1;      
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