#include<stdio.h>
void getMax(int x, int y) {
  (x>y)?printf("Num 1 is Greater"):printf("Num 2 is Greater");
}
int main() {
int num1,num2;
printf("Enter Numbers :");
scanf("%d %d",&num1,&num2);
getMax(num1,num2);
return 0;
}
