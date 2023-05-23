#include<stdio.h>
struct book {
int id;
char name[50];
double price;
};

void displayBook(struct book b1) {
 printf("%d ", b1.id);
 printf("%s ", b1.name);
 printf("%lf ", b1.price);
}

void displayAllBooks(struct book b1[]) {
for(int i=0; i<3; i++) {
printf("%d\n", b1[i].id);
printf("%s\n", b1[i].name);
printf("%lf\n", b1[i].price);
}

}
int main() {
    struct book b1[3];
    for(int i=0; i<3; i++) {
        printf("ENTER ID \n");
        scanf("%d",&b1[i].id);
        printf("ENTER NAME \n");
        scanf(" ");
        gets(b1[i].name);
        printf("ENTER PRICE \n");
        scanf("%lf",&b1[i].price);
    }

    printf("ID  |  NAME  |  PRICE \n");
    for(int i=0; i<3; i++){
    displayBook(b1[i]);
    }

    printf("\n++++++++++++++++++++++++++++++++++++++++++++++++++\n");
    displayAllBooks(b1);
return 0;
}
