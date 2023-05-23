#include<stdio.h>
struct book{
int id;
char name[50];
double price;
};

void displayBook(struct book b1) {
printf("ID : %d\n",b1.id);
printf("NAME : %s\n",b1.name);
printf("PRICE : %lf\n",b1.price);
}

int main () {
struct book b1;
printf("ENTER ID :\n");
scanf("%d", &b1.id);
printf("ENTER NAME : \n");
scanf(" ");
gets(b1.name);
printf("ENTER PRICE :");
scanf("%lf",&b1.price);

displayBook(b1);
return 0;
}
