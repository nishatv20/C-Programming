#include<stdio.h>
main() {
int pri,time,count;
float si,rate;

for(count=1; count<=3; count++)
    {
    printf("Enter the values of P,R,T : ");
    scanf("%d%f%d",&pri,&rate,&time);
    si = (pri*rate*time)/100;
    printf("Simple Interest = %f",si);
}
}
