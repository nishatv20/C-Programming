#include<stdio.h>
main() {
    int sum=0;
for(int i=1; i<=7; i++) {
    int fact=1;

    for(int j=i; j!=0; j--){
        fact = fact*j;

    }
    sum=sum + (i/fact);
}
printf("%d",sum);
}
