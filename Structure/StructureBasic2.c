#include<stdio.h>
struct book {
int id;
char name[50];
double price;
};
int main() {
    struct book b1;
    printf("ENTER ID :");
    scanf("%d",&b1.id);
    printf("ENTER NAME :");
    scanf(" ");
    gets(b1.name);
    printf("ENTER PRICE :");
    scanf("%lf",&b1.price);

    printf("ID : %d\n",b1.id);
    printf("NAME : %s\n",b1.name);
    printf("PRICE : %lf\n",b1.price);
return 0;
}
