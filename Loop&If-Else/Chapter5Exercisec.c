#include<stdio.h>
main() {
int num1,num2,res=1;
printf("Enter a Number : \n");
scanf("%d",&num1);
printf("Enter a Number : \n");
scanf("%d", &num2);

int i = num2;
while(i!=0) {
    res= num1*res;
    i--;
}
printf("Result is : %d", res);
}
