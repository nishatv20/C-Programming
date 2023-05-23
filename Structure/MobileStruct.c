#include<stdio.h>
struct mobile {
char name [50];
int cost;
int year;
char country[50];
};
void printMobile(struct mobile m1[]) {
    printf("  NAME | COST | YEAR | COUNTRY\n");
for(int i=0; i<3; i++) {
    printf("  %s  ",m1[i].name);
    printf("  %d  ",m1[i].cost);
    printf("  %d  ",m1[i].year);
    printf("  %d  ",m1[i].country);
    printf("\n");
}
}
int main() {
    struct mobile m1[3];
    for(int i=0; i<3;i++) {
        printf("ENTER BRAND NAME :\n");
        scanf(" ");
        gets(m1[i].name);
        printf("ENTER COST OF MOBILE :\n");
        scanf("%d",&m1[i].cost);
        printf("ENTER YEAR OF MAKE :\n");
        scanf("%d",&m1[i].year);
        printf("ENTER COUNTRY OF MAKE :\n");
        scanf(" ");
        gets(m1[i].name);
        printf("\n+++++++++++++++++++++++++++++++++++++++++++++++++\n");
    }
    printMobile(m1);
return 0;
}
