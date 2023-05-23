#include<stdio.h>
main() {
int num1,num2,hcf,lcm;
printf("Enter First Number : \n");
scanf("%d",&num1);
printf("Enter Second number : \n");
scanf("%d",&num2);

for(int i =1; i<=num1; i++) {
    if(num1%i==0 && num2%i==0) {
        hcf = i;
    }
}

/* Finding LCM*/
lcm = (num1*num2)/hcf;
printf("HCF = %d and LCM = %d",hcf,lcm);

}
