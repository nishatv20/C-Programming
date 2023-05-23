#include<stdio.h>
main() {
int num,num1,sum=0;
printf("Enter a Number : \n");
scanf("%d",&num);

for(num; num>=1; num=num/10) {
    num1 = num%10 ;
    sum = sum + num1;
}
printf("Sum of Digits is : %d \n", sum);
}
