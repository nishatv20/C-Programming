#include<stdio.h>
struct circle {
int rad;
int x;
int y;
};
void printCircle(struct circle c1[]) {
    printf("RADIUS|X-CORD|Y-CORD\n");
for(int i=0; i<3; i++) {
    printf(" %d ",c1[i].rad);
    printf(" %d ",c1[i].x);
    printf(" %d ",c1[i].y);
    printf("\n");
}
}
int main() {
struct circle c1[3];
for(int i=0; i<3;i++){
    printf("ENTER RADIUS OF CIRCLE :\n");
    scanf("%d",&c1[i].rad);
    printf("ENTER X COORDINATE :\n");
    scanf("%d",&c1[i].x);
    printf("ENTER Y COORDINATE :\n");
    scanf("%d",&c1[i].y);
    printf("\n++++++++++++++++++++++++++++++++++++++++++\n");
}
printCircle(c1);
return 0;
}
