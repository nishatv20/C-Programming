#include<stdio.h>
main() {
int num,count=0;
printf("Enter a Number : \n");
scanf("%d", &num);

for(num; num!=0; num=num/10) {
    count = count + 1 ;
}
printf("Number of Digits in a Number is : %d", count);
}
