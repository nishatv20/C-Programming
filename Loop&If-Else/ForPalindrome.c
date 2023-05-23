#include<stdio.h>
main() {

int num,rem,original;
int rev = 0;
printf("Enter a Number : \n");
scanf("%d",&num);
original = num;

for(num; num!=0; num=num/10) {
rem = num%10;
rev = rev*10 + rem;
}
if(original==rev){
    printf("Number is Palindrome... \n");
}
else {
    printf("Number is Not Palindrome...1");
}


}
