#include<stdio.h>
void getCount(int x) {
int y=x;
int count=0;
while(y!=0) {
    int res= y%10;
    count++;
    y=y/10;
}
printf("%d",count);
}
int main() {
int num;
printf("Enter a Number :");
scanf("%d",&num);
getCount(num);
return 0;
}
