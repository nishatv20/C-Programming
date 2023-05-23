#include<stdio.h>
int isEveOdd(int x) {
    if(x%2==0) {
        return 1;
    }
    else {
            return 0;
    }
}
main() {
int num;
printf("Enter a Number \n");
scanf("%d", &num);
int res = isEveOdd(num);
if(res==1) {
    printf("EVEN NUMBER");
}
else {
    printf("ODD NUMBER");
}
}
