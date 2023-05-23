#include<stdio.h>
void getMax(int x, int y, int z){
(x>y && x>z) ? printf("%d is Greater",x) : (y>x && y>z) ? printf("%d is Greater", y) : printf("%d is Greater", z);
}
int main() {
int num1, num2, num3;
printf("Enter Three Numbers :");
scanf("%d %d %d", &num1, &num2, &num3);
getMax(num1,num2,num3);
return 0;
}
