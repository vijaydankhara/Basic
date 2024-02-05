// A B C D E to  U V W X Y
#include<stdio.h>
#include<conio.h>
void main()
{                          
char a=65,n;         
            
do{                        
printf("\t%c",a);        
if((a+1)%5==0)
{
printf("\n");
}
a++;
}while(a<90);
}