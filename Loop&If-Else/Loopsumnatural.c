#include<stdio.h>
main() {
int start ;
int end;
int result = 0;

printf("Enter Starting Point : \n");
scanf("%d",&start);
printf("Enter Last Number : \n");
scanf("%d",&end);

while(start<=end) {
    result = result + start ;
    start = start +1 ;

}
printf("Sum of All Natural Numbers is : %d \n",result);
}
