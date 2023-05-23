#include<stdio.h>
main() {
int num,fact=1;
printf("Enter a Number :\n");
scanf("%d",&num);

for(int i=1; i<=num; i++) {
    fact= fact*i;
}
printf("The Factorial of a Number is : %d\n", fact);
}
