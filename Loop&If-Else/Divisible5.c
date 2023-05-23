#include<stdio.h>

main() {
int num ;
printf("Enter a number : \n");
scanf("%d", &num);

if(num % 5 == 0) {
    printf("Number is divisible by five");
}

if(num % 5 !=0 ) {
    printf("number is not divisible by five");
}
}
