#include<stdio.h>
main() {
int num, firstNumber, lastNumber , sum ;
printf("Enter a Number : \n");
scanf("%d",&num);

lastNumber = num%10;

while(num>=10) {
    num = num/10;
}
firstNumber = num ;
printf("First Number : %d and Last Number : %d", firstNumber, lastNumber);
sum = firstNumber + lastNumber ;
printf(" \n SUM of First and Last Number is : %d", sum);
}
