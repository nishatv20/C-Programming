#include<stdio.h>
main() {
int num,rem;
int temp,sum=0;
printf("Enter a Number :\n");
scanf("%d",&num);

for(temp=num; num!=0; num=num/10) {
        int fact=1;
    rem=num%10;
    for(int i=rem; i>=1; i--){
        fact=fact*i;
    }
    sum=sum+fact;
}
if(sum==temp){
    printf("Strong Number ");
}
else{
    printf("Not a Strong Number");
}
}
