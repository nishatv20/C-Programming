#include<stdio.h>
main() {
int num;
int count = 0;
printf("Enter a Number : \n");
scanf("%d",&num);

while(num!=0){
    num = (num/10);
    count = count + 1;

    }
printf("Number of Digits are : %d",count);
}
