#include<stdio.h>
main(){
int num,dig,cube,sum=0,temp;
printf("Enter a Number : \n");
scanf("%d",&num);

for(temp=num; num!=0; num=num/10) {
    dig = num%10;
    cube = dig*dig*dig;
    sum = sum+cube;
}
if(sum==temp) {
    printf("Number %d is Armstrong Number.",temp);

}
else {
    printf("Number %d is not Armstrong Number.",temp);
}
}
