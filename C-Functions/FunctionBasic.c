#include<stdio.h>
int sum;
void getSum(int x,int y) {
sum = x+y;
printf("Sum is : %d \n",sum);
}
main() {
int num1,num2;
printf("Enter First Number : \n");
scanf("%d",&num1);
printf("Enter Second Number : \n");
scanf("%d",&num2);

getSum(num1,num2);
}
