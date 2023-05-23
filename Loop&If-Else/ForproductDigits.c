#include<stdio.h>
main() {
int num,num1,pro=1;
printf("Enter a Number : \n");
scanf("%d",&num);

for(num; num>=1; num=num/10) {
    num1 = num%10;
    pro = pro * num1;
}
printf("Product of Digits of Numbers is : %d",pro);
}
