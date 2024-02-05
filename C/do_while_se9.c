#include<stdio.h>
#include<conio.h>
void main()
{                       // A
char i=65,j;            // A B
do{j=65;                // A B C 
do{                     // A B C D 
printf("\t%c",j);       // A B C D E
j++;
}while(j<=i);
i++;
printf("\n");
}while(i<=69);
}