#include<stdio.h>
void getLcm(int x, int y) {
    int hcf,lcm;
   for(int i =1; i<=x; i++) {
    if(x%i==0 && y%i==0) {
        hcf=i;
        }
}
printf("HCF is %d\n", hcf);
lcm = (x*y)/hcf;
printf("LCM is %d ", lcm);
}

main() {
int num1,num2;
printf("Enter two Numbers :");
scanf("%d %d", &num1,&num2);
getLcm(num1,num2);

}
