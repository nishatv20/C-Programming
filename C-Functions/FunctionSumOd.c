#include<stdio.h>
void getSumOdd(int x) {
int y=1;
int sum =0;
while(y<=x){
    if(y%2!=0) {
        sum =sum +y;
    }
    y++;
}
printf("SUM IS : %d", sum);
}
main() {
int num;
printf("Enter a Number :");
scanf("%d",&num);
getSumOdd(num);
return 0;
}
