#include<stdio.h>
main() {
int num1;
int num2;
int res;
printf("Enter Number 1: \n");
scanf("%d",&num1);
printf("Enter Number 2: \n");
scanf("%d",&num2);
char op ;
printf("Enter Operation + - * / : \n");
scanf(" %c",&op);

//Scanf() Doesnt take WHITE SPACE ad Input----

switch(op) {

case '+' :
    res = num1+num2 ;
    printf("Sum is: %d",res);
    break;

case '-' :
    res = num1-num2;
    printf("Subtraction is : %d", res);
    break;

case '*' :
    res = num1 * num2;
    printf("Multiplication is : %d", res);
    break;

case '/' :
    res = (num1/num2);
    printf("Division is : %d", res);
    break;

default :
    printf("Not a Valid Input");
}

}
