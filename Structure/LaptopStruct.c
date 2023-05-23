#include<stdio.h>
struct laptop {
char name[50];
int ram;
int harddisk;
char country[50] ;
};

void printLaptop(struct laptop l1[]) {
    printf("  NAME | RAM | HARDDISK | COUNTRY\n");
for(int i=0; i<3; i++) {
    printf("  %s  ",l1[i].name);
    printf("  %d  ",l1[i].ram);
    printf("  %d  ",l1[i].harddisk);
    printf("  %s  ",l1[i].country);
    printf("\n");
}
}
int main() {
    struct laptop l1[3];

    for(int i=0; i<3; i++) {
        printf("ENTER NAME OF BRAND :\n");
        scanf(" ");
        gets(l1[i].name);
        printf("ENTER RAM MEMORY :\n");
        scanf("%d",&l1[i].ram);
        printf("ENTER HARD DISK SPACE :\n");
        scanf("%d",&l1[i].harddisk);
        printf("ENTER COUNTRY OF ORIGIN :\n");
        scanf(" ");
        gets(l1[i].country);
        printf("\n+++++++++++++++++++++++++++++++++++++++++++++++++++++++++\n");
    }
    printLaptop(l1);
return 0;
}
