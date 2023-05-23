#include<stdio.h>
void getDigits(int x) {
int first;
int last = x;
int res;
first = x%10;
printf("FIRST NUMBER : %d\n", first);

while(last!=0) {
     res = last%10;
    last= last/10;
}
printf("LAST NUMBER :%d\n",res);
int sum = first + res;
printf("SUM of FIRST and LAST is :%d", sum);
}
int main() {
int num;
printf("Enter a Number :");
scanf("%d", &num);
getDigits(num);
return 0;

}
