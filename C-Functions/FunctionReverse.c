#include<stdio.h>
void getRever(int x) {
int y = x;
while(y>0) {
    printf("%d \n",y);
    y--;
}
}
int main() {
int num;
printf("Enter Number :");
scanf("%d",&num);
getRever(num);
return 0;
}
