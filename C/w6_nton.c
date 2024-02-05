#include<stdio.h>
#include<conio.h>
void main()
{                       // write a pogram "-n to n"
int a,n;
scanf("%d",&n);
a=n;
while(a>=-n)
{
printf("%5d",a);
a--;
}
}