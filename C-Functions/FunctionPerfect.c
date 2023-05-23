#include<stdio.h>
void isPerfect(int x) {
    int sum =0;
    int temp=x;
    for(int num=1; num<x; num++){
    if(x%num ==0){
        sum=sum+num;
    }

}
if(temp==sum) {
    printf("PERFECT NUMBER");
}
else {
    printf("NOT PERFECT NUMBER");
}
}
int main() {
int num;
printf("Enter a Number :");
scanf("%d", &num);
isPerfect(num);
return 0;
}
