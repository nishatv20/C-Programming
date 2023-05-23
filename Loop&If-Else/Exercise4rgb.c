#include<stdio.h>
#include<math.h>
main() {
    int red,green,blue;
    float white,cyan,mag,yell,bla;
    printf("Enter value of Red on scale 0-255 : \n");
    scanf("%d",&red);
    printf("Enter value of Green on scale 0-255 : \n");
    scanf("%d",&green);
    printf("Enter value of Blue on scale 0-255 : \n");
    scanf("%d",&blue);

    white = max(red/255,green/255,blue/255);
    printf("%d",&white);
}
