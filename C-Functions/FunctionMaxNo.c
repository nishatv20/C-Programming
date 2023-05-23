#include<stdio.h>

int getMax(int x, int y) {
    if(x>y) {
        return 1;
    }
    else {
        return 0;
    }
}
main() {
int num1,num2;
printf("Enter First Number : \n");
scanf("%d",&num1);
printf("Enter Second Number : \n");
scanf("%d",&num2);

int res=getMax(num1,num2);

if(res==1) printf("%d is Greater",num1);
else printf("%d is Greater",num2);
return 0;
}
