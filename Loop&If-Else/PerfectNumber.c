#include<stdio.h>
main() {
int num,sum=0;
printf("Enter a Number : \n");
scanf("%d",&num);

for(int i=1; i<num; i++) {
    if(num%i == 0) {
        sum= sum+i;
    }

}
if(sum==num) {
    printf("The Number %d is Perfect Number",num);
}
else {printf("THe Number %d is Not Perfect number",num);}
}
