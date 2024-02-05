// //write a pogram "odd number print 1,3,5,7,n"
#include<stdio.h>
#include<conio.h>
void main()
{
int i,n;           
scanf("%d",&n);
i=1;
while(i<=n)
{
if(i%2==1)
{
printf("%3d",i);
}i++;
}
}