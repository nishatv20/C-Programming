#include<stdio.h>
main() {
int num1,num2,num3,lar;
printf("Enter First Number : \n");
scanf("%d",&num1);
printf("Enter Second Number : \n");
scanf("%d",&num2);
printf("Enter Third Number : \n");
scanf("%d",&num3);

lar = (num1>num2 && num1>num3)? num1 : (num2>num3) ? num2 : num3 ;
printf("Larger of Three Numbers is : %d",lar);
}
