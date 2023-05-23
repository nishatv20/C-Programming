#include<stdio.h>
int are;
void getArea(int x, int y) {
are = (x*y)/2 ;
printf("AREA = %d" ,are);
}
 main() {
 int base,hei;
 printf("Enter Base of triangle : ");
 scanf("%d",&base);
 printf("Enter Height of triangle : ");
 scanf("%d",&hei);
 getArea(base,hei);
 }
