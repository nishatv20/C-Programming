#include<stdio.h>
main() {
int num;

printf("Enter Number : \n");
scanf("%d",&num);

switch(num%2==0) {

case 0:
    printf("Number is Odd..");
    break;

case 1:
    printf("Number is Even..");
}
}
