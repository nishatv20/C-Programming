#include<stdio.h>
main() {
int num ;
float num1,num2,num3,num4,num5,sum ;
printf("Enter Five digit number:");
scanf("%d",&num);

num1 = num%10;
printf("First Number is :%.2f \n", num1);
num = num/10;

num2 = num%10;
printf("Second Number is: %.2f \n", num2);
num = num/10;

num3 = num%10;
printf("Third Number is: %.2f \n", num3);
num = num/10;

num4 = num%10;
printf("Fourth number is: %.2f \n", num4);
num = num/10;

num5 = num%10;
printf("Fifth number is: %.2f \n", num5);
num = num/10;

sum = num1+num2+num3+num4+num5 ;
printf("Sum of five numbers is : %.2f \n", sum);
}
