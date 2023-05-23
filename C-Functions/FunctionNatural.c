#include<stdio.h>
void getNatural(int x) {
int y= 1;
while(y<=x) {
    printf("%d \n",y);
    y++;
}
}
int main() {
int num;
printf("Enter Number :");
scanf("%d", &num);
getNatural(num);
return 0;
}
