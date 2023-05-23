#include<stdio.h>
main() {
int ang1,ang2,ang3,sum ;
printf("Enter First Angle : \n");
scanf("%d",&ang1);
printf("Enter Second Angle : \n");
scanf("%d",&ang2);
printf("Enter Third Angle : \n");
scanf("%d",&ang3);

sum = ang1 + ang2 + ang3;
if(sum<=180) {
    printf("This is a Valid Triangle : \n");
}

else {
    printf("This is not a valid Triangle : \n");
}
}
