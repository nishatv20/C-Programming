#include<stdio.h>
main() {
int ang1,ang2,ang3;
printf("Enter First Angle : \n");
scanf("%d",&ang1);

printf("Enter Second Angle : \n");
scanf("%d",&ang2);

printf("Enter Third Angle : \n");
scanf("%d",&ang3);

if(ang1==ang2 && ang1==ang3) {
    printf("This is Equilateral Triangle...");
}

else if(ang1==ang2 || ang1==ang3) {
    printf("This is an Isosceles Triangle...");
}

else {
    printf("This is not Scalene Triangle...");
}
}
