#include<stdio.h>
#include<math.h>
#include<conio.h>

main() {
int x1,y1,x2,y2,radius;
float pc;
printf("Enter the center co-ordinates of the circle: \n");
scanf("%d %d", &x1,&y1);

printf("Enter Radius of the Circle : \n");
scanf("%d", &radius);

printf("Enter the point co-ordinates :\n");
scanf("%d", &x2, &y2);

pc = sqrt(pow(x2-x1,2) + pow(y2-y1,2));

if(pc > radius) {
    printf("Point (%d,%d) lies outside Circle .", x2,y2);
}
else if(pc < radius) {
    printf("Point (%d%d) lies inside Circle. ", x2,y2);

}

else if(pc==radius)  {
    printf("Point (%d%d) lies on the boundary of circle. ");
}

else {
    printf("Wrong ENTRY");
}
}
