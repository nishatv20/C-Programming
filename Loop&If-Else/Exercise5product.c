#include<stdio.h>
main() {
int num ;
int num1 ;
int pro = 1;

printf("Enter a Number : \n");
scanf("%d",&num);

while(num>0) {
    num1 = num%10 ;
    pro = num1 * pro;
    num = num/10;
}
printf("\n Product of Digits of a Number is : %d", pro12);
}
