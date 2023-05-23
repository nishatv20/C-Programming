
#include<stdio.h>
main() {
int num,num1;
printf("Enter a Number : \n");
scanf("%d",&num);

for(num; num!=0; num=num/10) {
    rem = num%10;
    rev = rev*10 + rem;
}

if(original == rev)
    printf("Number is Palindrome...");

else
    printf("Number is not Palindrome...");
}
