#include<stdio.h>
struct book{
int id;
char name[50];
double price;
};

int main() {
    struct book b1 = {11, "LET US C", 650};
    printf("ID : %d\n",b1.id);
    printf("NAME : %s\n",b1.name);
    printf("PRICE : %lf\n",b1.price);
return 0;
}
