#include<stdio.h>
main() {
int num,num1;
int rev;
printf("Enter a Number : \n");
scanf("%d",&num);

while(num>0) {
    num1 = num%10 ;
    printf("%d",num1);
    num = num/10 ;
}
}
