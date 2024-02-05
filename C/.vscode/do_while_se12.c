#include<stdio.h>
#include<conio.h>
void main()
{                                // A
int i=1,a=65,j;                  // B C
do{j=1;                          // D E F
do{                              // G H I J
  printf("%c\t",a++);            // K L M N O
  j++;
}while(j<=i);
i++;
printf("\n");
}while(i<=5);
}