#include<stdio.h>
main() {
int start ;
int end = 1;
printf("Enter Starting Number : \n");
scanf("%d",&start);

while(start>=end) {
    printf("%d \n",start);
    start = start-1;
}
}
