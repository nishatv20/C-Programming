#include<stdio.h>
int per;
void getPer(int x , int y) {
per = 2*(x+y);
printf("Perimeter Of Rectangle is : %d \n", per);
}
main() {
int len ,wid;
printf("Enter Length of rectangle : \n");
scanf("%d",&len);
printf("Enter Breadth of Rectangle : \n");
scanf("%d",&wid);

getPer(len,wid);
}
