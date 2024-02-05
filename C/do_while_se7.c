#include<stdio.h>
#include<conio.h>
void main()
{                       //  1
int i=1,a=1,j;          //  2 3
do{j=1;                 //  4  5  6
do{                     //  7  8  9  10
printf("\t%d",a++);     //  11 12 13 14 15
j++;
}while(j<=i);
i++;
printf("\n");
}while(i<=5);
}