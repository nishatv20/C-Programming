#include<stdio.h>
void getSum(int x) {
    int y = x;
    int sum =0;
    while(y!=0) {
        int res = y%10;
        sum = sum +res;
        y=y/10;
    }
    printf("SUM IS: %d", sum);
}
int main() {
int num;
printf("Enter a Number : ");
scanf("%d", &num);
getSum(num);
return 0;
}
