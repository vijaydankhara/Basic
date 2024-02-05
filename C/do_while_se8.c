#include<stdio.h>
#include<conio.h>
void main()            // 5
{                      // 5 4 
int i=5,j;             // 5 4 3 
do{j=5;                // 5 4 3 2
do{                    // 5 4 3 2 1
printf("\t%d",j);
j--;
}while(j>=i);
i--;
printf("\n");
}while(i>=1);
}