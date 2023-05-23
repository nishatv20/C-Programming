#include<stdio.h>
main() {

int num1,num2,res;
int x;
do{
printf("Enter First Number : \n");
scanf("%d",&num1);
printf("Enter Second Number : \n");
scanf("%d",&num2);

printf("Enter 1 --- ADD \n");
printf("Enter 2 --- SUB \n");
printf("Enter 3 --- MUL \n");
printf("Enter 4 --- DIV \n");

int op;
printf("Enter Choice --- \n");
scanf("%d",&op);

switch(op) {
case 1: res = num1 + num2 ;
printf("Addition is : %d", res);
break;

case 2: res = num1 - num2;
printf("Subtraction is : %d", res);
break;

case 3: res = num1 * num2;
printf("Multiplication is : %d", res);
break;

case 4: res = num1/num2 ;
printf("Division is : %d", res);
break;

default : printf("Not a Valid Input ");
break;
}
printf("\n-----Press 1 To Continue-----\n");
scanf("%d",&x);
}
while(x==1);
}
