#include<stdio.h>
void getFibbo(int x) {
int num1=0;
int num2=1;
printf("FIBBONIACI SERIES IS : %d%d", num1,num2);
for(int num=2; num<x; num++) {
    int num3 = num1+num2;
    printf("%d",num3);
    num1=num2;
    num2=num3;
}
}
int main() {
int num;
printf("Enter a Number :");
scanf("%d",&num);
getFibbo(num);
return 0;
}
