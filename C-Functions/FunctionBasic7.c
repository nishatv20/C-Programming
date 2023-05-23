#include<stdio.h>
int angle3;
void getAngle(int x,int y){
angle3 = 180 -(x+y);
printf("Third Angle is : %d",angle3);
}
main() {
int angle1,angle2;
printf("Enter First Angle : \n");
scanf("%d",&angle1);
printf("Enter Second Angle : \n");
scanf("%d",&angle2);
getAngle(angle1,angle2);
}
