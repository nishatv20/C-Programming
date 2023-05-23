#include<stdio.h>
main() {
int num,num1 ;
int sum=0 ;
printf("Enter a Number : \n");
scanf("%d",&num);

while(num>0) {
    num1 = num%10 ;
    sum = sum + num1 ;
    num = num/10;
}
printf(" \n The Sum of the Digits of a Number is :  %d", sum);
}
