#include<stdio.h>
void isPrime(int x){
    int flag,y =2;
    while(y<x) {
        if(x%y==0) {
            flag =1;
            break;
        }
        y++;
    }
    if(flag==0)
        printf("Number is Prime");

    else
        printf("Number is not Prime");

}
int main() {
int num;
printf("Enter a Number : ");
scanf("%d", &num);
isPrime(num);
return 0;
}
