// write a pogram "1,4,9,16..n"
#include<stdio.h>
#include<conio.h>
void main()
{                           
int a=1,n;
scanf("%d",&n);
while(a<=n)
{
printf("%d\t",a*a);
a++;
}
}