#include<stdio.h>
void getHcf(int x, int y) {
    int hcf;
    for(int i=1; i<=x; i++ ) {
        if(x%i==0 && y%i==0) {
                hcf =i;
        }
}
printf("HCF is : %d",hcf);
    }

main() {
int num1,num2;
printf("Enter two Numbers :");
scanf("%d %d", &num1, &num2);
getHcf(num1,num2);
return 0;
}
