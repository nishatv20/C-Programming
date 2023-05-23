#include<stdio.h>
struct room {
int width;
int height;
int doors;
};

void printRoom(struct room r1[]) {
int i;
printf("WIDTH  |  HEIGHT  |  DOORS\n");
for(i=0; i<3; i++) {

    printf("%d ",r1[i].width);
    printf("    %d    ",r1[i].height);
    printf("    %d    ",r1[i].doors);
    printf("\n");
}
}
int main() {
struct room r1[3];
int i;
for(i=0; i<3; i++) {
    printf("ENTER WIDTH :");
    scanf("%d",&r1[i].width);
    printf("ENTER HEIGHT :");
    scanf("%d",&r1[i].height);
    printf("ENTER DOORS :");
    scanf("%d",&r1[i].doors);
    printf("\n-----------------------------------------\n");
}
printf("\n+++++++++++++++++++++++++++++++++++++++++++++++++++++++\n");
printRoom(r1);
printf("\n+++++++++++++++++++++++++++++++++++++++++++++++++++++++\n");
return 0;
}
