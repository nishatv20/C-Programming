#include<stdio.h>
void getMax(int x, int y) {
    switch(x>y) {
         case 0:
        printf("%d is Greater", y);
        break;

    case 1:
        printf("%d is Greater", x);
    break;


    default:
    printf("Not a Valid INPUT");
    break;

    }
}
int main() {
int num1,num2;
printf("Enter two Numbers :");
scanf("%d%d ",&num1, &num2);
getMax(num1,num2);
return 0;
}
