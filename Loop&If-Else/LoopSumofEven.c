#include<stdio.h>
main() {
int start ;
int end;
int result = 0;
printf("Enter Starting Point : \n");
scanf("%d",&start);
printf("Enter Last Point : \n");
scanf("%d",&end);

while(start<=end) {

    if(start%2==0) {
        result = start + result ;
    }
    start = start + 1;
}
printf("Sum of Even Numbers is : %d\n",result);
}
