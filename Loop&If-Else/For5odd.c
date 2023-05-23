#include<stdio.h>
main() {
int num;
printf("Enter a Number : \n");
scanf("%d",&num);

for(int i =1; i<=num; i++) {
if(i%2 !=0) {
    printf("%d \n",i);
}
}
}
