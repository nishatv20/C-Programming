#include<stdio.h>
main() {
    int num;
    int num1,num2,num3,num4,num5;
    printf("Enter a Number: \n");
    scanf("%d", &num);

    printf("Number in  reverse is: ");
    num1 = num%10;
    printf("%d",num1);
    num = num/10;

    num2 = num%10;
    printf("%d",num2);
    num = num/10;

    num3 = num%10;
    printf("%d",num3);
    num= num/10;

    num4 = num%10;
    printf("%d",num4);
    num = num/10;

    num5 = num%10;
    printf("%d",num5);



}
