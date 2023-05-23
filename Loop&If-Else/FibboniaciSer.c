#include<stdio.h>
main() {
int num,n3;
printf("Enter a Number : \n");
scanf("%d",&num);
int n1=0;
int n2=1;
printf(" %d %d", n1, n2);
for(int i=3; i<=num; i++) {
    n3 =n1+n2;
    printf(" %d" , n3);
    n1=n2;
    n2=n3;
}
}
