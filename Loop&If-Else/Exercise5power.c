#include<stdio.h>

 main() {
 int base ,exp;
 int value = 1;
 printf("Enter a Number :\n");
 scanf("%d",&base);
 printf("Enter the power to be Raised : \n");
 scanf("%d",&exp);

 while(exp!=0) {
 value = value * base ;
 exp = exp-1 ;
 }
 printf("The Power of a Number is : %d",value);
 }
