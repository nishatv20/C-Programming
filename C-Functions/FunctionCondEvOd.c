#include<stdio.h>
void isEvOd(int x) {
    (x%2==0) ? printf("%d is Even",x) : printf("%d is Odd",x);
    }
int main() {

int num;
printf("Enter a Number :");
scanf("%d",&num);
isEvOd(num);
return 0;
}
