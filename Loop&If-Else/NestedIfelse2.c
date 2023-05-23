#include<stdio.h>
main() {
int num ;
printf("Enter a Number : \n");
scanf("%d",&num);

if(num%5 == 0) {
    if(num%11 == 0) {
        printf("Number is Divisible by Both....");
    }

    else {
        printf("Number is Divisible only by 5...");
    }
}

else {
    if(num%11==0) {
        printf("Number is Divisible only by 11...");
    }

    else {
        printf("Number is Not Divisble by either 5 or 11...");
    }
}
}
