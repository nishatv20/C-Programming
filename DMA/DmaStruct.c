#include<stdio.h>
struct book {
int id;
char name[100];
float price;
};
int main() {
int size;
printf("ENTER SIZE OF AN ARRAY :\n");
scanf("%d",&size);
struct book *ptr = (struct book*) malloc(size*sizeof(struct book));
for(int i=0; i<size;i++) {
    printf("ENTER BOOK ID \n");
    scanf("%d",&ptr[i].id);
    printf("ENTER BOOK NAME \n");
    scanf(" ");
    gets(ptr[i].name);
    printf("ENTER BOOK PRICE \n");
    scanf("%f",&ptr[i].price);
}
printf("\n ID    NAME      PRICE\n");
printf("--------------------------");
for(int i=0; i<size; i++) {
    printf(" %d", ptr[i].id);
    printf("  %s",ptr[i].name);
    printf("   %.2f\n",ptr[i].price);
}
printf("--------------------------");
free(ptr);
}
