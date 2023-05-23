#include<stdio.h>
main() {
int start;
int end;
printf("Enter Start Number : \n");
scanf("%d",&start);
printf("Enter Last Number : \n");
scanf("%d",&end);

while(start<=end) {

    printf("%d \n",start);
    start = start + 1;
}
}
