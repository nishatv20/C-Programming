#include<stdio.h>
main() {
int rem,num;
int original;
int rev = 0;
printf("Enter a Number : \n");
scanf("%d",&num);
original = num ;

while(num != 0) {
    rem = num%10;
    rev = rev*10 + rem ;
    num = num/10 ;
    }

     if(original==rev)
        printf("Number is Palindrome...");

else
    printf("number is Not Palindrome...");

}
