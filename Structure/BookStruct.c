#include<stdio.h>
struct book {
char name[50];
int pages;
int chapter;
char author[50];
};

void printBook(struct book b1[]) {
for(int i=0; i<3; i++) {
    printf("  %s  ",b1[i].name);
    printf("  %d  ",b1[i].pages);
    printf("  %d  ",b1[i].chapter);
    printf("  %s  ",b1[i].author);
    printf("\n");
}
}
int main() {
struct book b1[3];
for(int i=0; i<3; i++) {
    printf("ENTER NAME OF BOOK : \n");
    scanf(" ");
    gets(b1[i].name);
    printf("ENTER NO OF PAGES : \n");
    scanf("%d",&b1[i].pages);
    printf("ENTER NO OF CHAPTERS : \n");
    scanf("%d",&b1[i].chapter);
    printf("ENTER NAME OF AUTHOR :\n");
    scanf(" ");
    gets(b1[i].author);
    printf("\n++++++++++++++++++++++++++++++++++++++++++\n");
}
printBook(b1);
return 0;
}
