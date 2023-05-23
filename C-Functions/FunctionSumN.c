#include<stdio.h>
void getSum(int x){
    int y=1;
    int sum =0;
while(y<=x) {
sum =sum + y;
    y++;
}
printf("SUM IS : %d", sum);
}
int main() {
    int num;
    printf("Enter Number :");
    scanf("%d", &num);
    getSum(num);
return 0;
}
