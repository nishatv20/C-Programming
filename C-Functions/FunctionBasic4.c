#include<Stdio.h>
int area;
void getArea(int x, int y) {
 area = x*y ;
 printf("Area Of Rectangle is : %d \n", area);
}
main() {
int len,wid;
printf("Enter Length of Rectangle : \n");
scanf("%d",&len);
printf("Enter Width of Rectangle : \n");
scanf("%d",&wid);

getArea(len,wid);
}
