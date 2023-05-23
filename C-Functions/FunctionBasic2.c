#include<stdio.h>
int sum,sub,mul,div ;
void getSum(int x , int y){
sum = x+ y ;
printf("Sum of Two Numbers is : %d\n", sum);
}

void getSub(int x , int y) {
sub = x-y;
printf("Subtraction of Two Numbers is : %d\n", sub);
}

void getMult(int x , int y) {
mul = x*y;
printf("Multiplication of Two Numbers is : %d\n", mul);
}

void getDiv(int x, int y) {
div = x/y;
printf("Division of two Numbers is : %d\n", div);
}

main() {
int num1,num2;
printf("Enter First Number : \n");
scanf("%d",&num1);
printf("Enter Second Number : \n");
scanf("%d",&num2);

getSum(num1,num2);
getSub(num1,num2);
getMult(num1,num2);
getDiv(num1,num2);
}
