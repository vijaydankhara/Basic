#include<stdio.h>
#include<conio.h>
void main()
{
 char a=1,b,c=65,s=97;
 do{b=1;                        // A
 do{                            // b c
 if(a%2==0)                     // D E F  
 {                              // g h i j
 printf("%c",s++);              // K L M N O
 c++;
 }else
 {
 printf("%c",c++);
 s++;
 }
 b++;
 }while(b<=a);
 a++;
 printf("\n");
 }while(a<=5);

 }
