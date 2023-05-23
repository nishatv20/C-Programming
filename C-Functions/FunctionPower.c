#include<stdio.h>

void getPower(int x, int y) {
    int res = 1;
    int temp =y;
    while(temp!=0) {
    res = x * res;
    temp--;
}
printf("POWER of %d is : %d", x, res);
}
int main() {
int num1,num2;
printf("Enter a Number :");
scanf("%d", &num1);
printf("Enter Power to be raised :");
scanf("%d", &num2);
getPower(num1,num2);
return 0;
}
