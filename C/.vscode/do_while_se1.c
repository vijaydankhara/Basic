// 1 2 3 4 5  to  21 22 23 24 25.
#include<stdio.h>
#include<conio.h>
void main()
{                      
int a=1,n;          
                     
do{                      
printf("\t%d",a);
if(a%5==0)
{
printf("\n");
}
a++;
}while(a<=25);
}