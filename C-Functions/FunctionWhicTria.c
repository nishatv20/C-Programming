#include<stdio.h>
int getTriangle(int x, int y, int z) {
if(x==y && y==z) {
    return 1;
}
else if(x==y || x==z) {
    return 0;
}
else {
    return 2;
}
}
int main() {
int side1,side2,side3;
printf("Enter Sides of Triangle : ");
scanf("%d %d %d", &side1, &side2, &side3);
int res = getTriangle(side1,side2,side3);
if(res==1) {
    printf("EQUILATERAL TRIANGLE");
}
if(res==0){
    printf("ISOSCELES TRIANGLE");
}
if(res==2) {
    printf("SCALENE TRIANGLE");
}
return 0;
}
