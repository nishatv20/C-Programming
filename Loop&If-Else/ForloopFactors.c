#include<stdio.h>
main() {
int num;
printf("Enter a Number : \n");
scanf("%d",&num);

for(int i=2; i<=num; i++) {
if(num%i==0) {
    printf("The Factors Are : %d\n",i);
}
}
}
