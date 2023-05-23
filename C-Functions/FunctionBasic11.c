#include<stdio.h>
int si;
void getSi(int x, int y, int z){
    si = (x*y*z)/100;
    printf("SIMPLE INTEREST : %d", si);
}
main() {
int p,r,t;
printf("Enter PRINCIPAL : \n");
scanf("%d",&p);
printf("Enter RATE : \n");
scanf("%d",&r);
printf("Enter TIME : \n");
scanf("%d",&t);

getSi(p,r,t);
}
