#include<stdio.h>
main() {
int start;
int end;

printf("Enter Starting Number: \n");
scanf("%d",&start);
printf("Enter Last Number: \n");
scanf("%d",&end);
while(start<=end) {

    if(start%2==0)
        printf("Number is Even: %d \n", start);

    start = start+1;
}
}
