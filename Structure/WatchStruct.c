#include<stdio.h>
struct watch {
char brand[50];
int yearofmake;
int cost;
char country[50];
};

void printType(struct watch w1[]) {

printf("  BRAND  |  YEAR  |  COST  |  COUNTRY\n");
for(int i=0; i<3; i++) {
    printf("%s  ",w1[i].brand);
    printf("  %d  ",w1[i].yearofmake);
    printf("  %d  ",w1[i].cost);
    printf("  %s  ",w1[i].country);
    printf("\n");
}
}
int main() {
    struct watch w1[3];

    for(int i=0; i<3; i++) {
        printf("ENTER BRAND OF WATCH :\n");
        scanf(" ");
        gets(w1[i].brand);
        printf("ENTER YEAR OF MAKE :\n");
        scanf("%d",&w1[i].yearofmake);
        printf("ENTER COST OF WATCH :\n");
        scanf("%d",&w1[i].cost);
        printf("ENTER COUNTRY OF ORIGIN :\n");
        scanf(" ");
        gets(w1[i].country);
        printf("\n+++++++++++++++++++++++++++++++++++++++++\n");
    }
    printf("\n+++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++\n");
    printType(w1);
    return 0;
}
