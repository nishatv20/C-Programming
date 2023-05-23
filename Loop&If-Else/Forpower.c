#include<stdio.h>
main() {
int num,num1=1;
printf("Enter a Number : \n");
scanf("%d",&num);
int pow;
printf("Enter power of Number : \n");
scanf("%d",&pow);

for(int i=1; i<=pow; i++) {
    num1 = num1*num;
}
printf("%d",num1);
}
