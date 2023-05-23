#include<stdio.h>
main() {
int num,num1 ;
printf("Enter a Number : \n");
scanf("%d", &num);

 for(int i = 1; i<=10; i++) {
    num1 = num*i ;
    printf("%d * %d = %d \n", num,i,num1);
 }
}
