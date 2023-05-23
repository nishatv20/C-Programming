#include<stdio.h>
 main() {
 int num,fact=1;
 printf("Enter a Number :");
 scanf("%d",&num);

 for(int i =num; i>=1; i--){
    fact = fact*i;

 }
 printf("The Factorial of a Number is : %d", fact);
 }
