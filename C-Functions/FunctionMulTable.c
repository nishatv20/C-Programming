#include<stdio.h>
void getTable(int x) {
int y=1;
while(y<=10) {
    int pro= x*y;
    printf("%d * %d = %d\n", x, y, pro);
    y++;
}
}
int main() {
int num;
printf("Enter number:");
scanf("%d",&num);
getTable(num);
return 0;
}
