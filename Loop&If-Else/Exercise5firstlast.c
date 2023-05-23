#include<stdio.h>
main() {

int num,firstDigit,lastDigit;
printf("Enter a Number : \n");
scanf("%d",&num);
lastDigit = num%10 ;

while(num>=10)
    {
    num = num/10 ;

}
firstDigit = num;
 printf("First Digit = %d and Last Digit = %d \n\n", firstDigit,lastDigit);


}
