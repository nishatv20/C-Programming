#include<stdio.h>
main() {
int num;
printf("Enter a number : \n");
scanf("%d", &num);

if(num%5 == 0 && num%11 == 0) {
    printf("Number is divisible by both...");
}
else {
    printf("Number is not divisible...");
}
}
