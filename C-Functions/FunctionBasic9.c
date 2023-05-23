#include<stdio.h>
float area;
void getArea(int x) {
    area= x*x * (1.73/4);
    printf("AREA IS : %f", area);
}
main() {
int len;
printf("Enter Length : \n");
scanf("%d",&len);
getArea(len);
}
