 #include<stdio.h>
#include<conio.h>
void main()
{
int i=1,j;
while(i<=5)               // 1 1 1 1 1
{                         // 2 2 2 2 2
j=1;                      // 3 3 3 3 3
while(j<=5)               // 4 4 4 4 4
{                         // 5 5 5 5 5
printf("%d",i);
j++;
}
printf("\n");
i++;
}

}