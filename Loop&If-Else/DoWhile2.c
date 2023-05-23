#include<stdio.h>
main() {
int num,sum=0;
int pro = 1;
int rev = 0;
int temp,rem,x;
printf("Enter a Number \n");
scanf("%d",&num);
do {
printf("ENTER 1 For Sum of Digits : \n");
printf("ENTER 2 For Product of Digits : \n");
printf("ENTER 3 For Palindrome of Number : \n");
printf("ENTER 4 For Reverse of Number : \n");

int op;
printf("----Enter Choice of OPERATION----\n");
scanf("%d",&op);

switch(op) {

case 1 : for(temp=num; num!=0; num=num/10){
     rem = num%10;
     sum = sum + rem;
}
printf("The Sum of DIGITS is : %d\n", sum);
break;

case 2 : for(temp = num; num!=0; num=num/10) {
          rem = num%10;
          pro = rem * pro ;
}
printf("The Product Of DIGITS is : %d\n",pro);
break;

case 3 : for(temp =num; num!=0; num=num/10){
           rem = num%10;
            rev = rev*10 + rem;
}
   if(temp==rev) {
        printf("Number is PALINDROME \n");
}
else {
    printf("Number is Not PALINDROME \n");
}
break;

case 4 : for(temp = num; num!=0; num=num/10) {
           rem = num%10;
            rev = rev*10 + rem;
}
    printf("The Reverse Of Number is : %d \n",rev);
    break;

    default : printf("Not a Valid INPUT \n");
    break;
}

printf("\n----Enter 1 to CONTINUE----\n");
scanf("%d",&x);
}
while(x==1);
}
