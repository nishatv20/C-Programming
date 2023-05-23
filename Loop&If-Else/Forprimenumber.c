#include<stdio.h>
main() {
int num,num1;
printf("Enter a Number : \n");
scanf("%d",&num);

for(int i=2; i<num; i++) {

    num1 = num%i;
    break;
    if(num1==0) {
        printf("Number is Prime...");
    }
    else
        printf("Number is Not Prime...");
}
}

