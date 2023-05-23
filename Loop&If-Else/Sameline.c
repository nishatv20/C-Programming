#include<stdio.h>
main() {
    float x1,y1,x2,y2,x3,y3,slope1,slope2;
    printf("Enter x1,y1 : \n");
    scanf("%f %f", &x1,&y1);

    printf("Enter x2,y2 : \n");
    scanf("%f %f", &x2,&y2);

    printf("Enter x3,y3 : \n");
    scanf("%f %f", &x3,&y3);

    slope1 = (x2-x1)/(y2-y1);
    slope2 = (x3-x2)/(y3-y2);

    if(slope1==slope2) {
        printf("All 3 points lie on the same line \n");
    }
    else {
        printf("All 3 points don not lie on the same line ");
    }
}
