#include<stdio.h>
main() {
int side1,side2,side3 ;
printf("Enter First Side : \n");
scanf("%d", &side1);

printf("Enter Second Side : \n");
scanf("%d", &side2);

printf("Enter Third Side : \n");
scanf("%d", &side3);

if((side1+side2 > side3) && (side2+side3 > side1) && (side3+side2 > side1)) {
    printf("Triangle is Valid....");
}

else {
    printf("Triangle is not Valid....");
}
}
