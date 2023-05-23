#include<stdio.h>

int isValid(int x, int y, int z) {
if(x + y + z == 180) {
    return 1;
}
else {
    return 0;
}
}
main() {
int angle1, angle2, angle3;
printf("Enter Angle no. 1, 2, 3 :");
scanf("%d %d %d",&angle1, &angle2, &angle3);
int res = isValid(angle1, angle2, angle3);
if(res==1) {
    printf("VALID TRIANGLE");
}
else {
    printf("NOT VALID");
}
return 0;
}
