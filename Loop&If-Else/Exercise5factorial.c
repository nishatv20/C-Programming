#include<stdio.h>
main() {
int num ;
int pro = 1 ;
printf("Enter a Number : \n");
scanf("%d",&num);

while(num!=0) {
    pro = pro * num;
    num = num - 1;
}
printf("The Factorial of a Number is: %d \n",4pro);
}
