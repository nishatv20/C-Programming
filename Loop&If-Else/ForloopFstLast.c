#include<stdio.h>
main() {
int num;
int count = 10;
printf("Enter a Number : \n");
scanf("%d",&num);
int num1 = num%10;
for(num; num> count; num=num/10) {
    printf("");
}
printf("The first Number is : %d \n",num);
printf("The Last Number is : %d \n", num1);

}
