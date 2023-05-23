#include<stdio.h>
struct account {
char holdername[50];
int accno;
float interest;
char bankname[50];
};

void printDetail(struct account a1[]) {
for(int i=0; i<3; i++) {
    printf(" %s ",a1[i].holdername);
    printf(" %d ",a1[i].accno);
    printf(" %.2f ",a1[i].interest);
    printf(" %s ",a1[i].bankname);
    printf("\n");
}
}
int main() {
 struct account a1[3];
 for(int i=0; i<3; i++) {
    printf("ENTER HOLDER NAME :\n");
    scanf(" ");
    gets(a1[i].holdername);
    printf("ENTER ACCOUNT NUMBER :\n");
    scanf("%d",&a1[i].accno);
    printf("ENTER RATE OF INTEREST :\n");
    scanf("%f",&a1[i].interest);
    printf("ENTER NAME OF BANK :\n");
    scanf(" ");
    gets(a1[i].bankname);
    printf("\n++++++++++++++++++++++++++++++++++++++++++++++\n");

 }

 printDetail(a1);
 printf("\n+++++++++++++++++++++++++++++++++++++++++++++++++\n");
    return 0;
}
