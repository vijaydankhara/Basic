#include<stdio.h>
#include<conio.h>
void main()
{                       //  1
int i=1,j;              //  1 2               
do{j=1;                 //  1 2 3 
do{                     //  1 2 3 4 
printf("\t%d",j);       //  1 2 3 4 5
j++;
}while(j<=i);
i++;
printf("\n");
}while(i<=5);
}