#include<stdio.h>
#include<stdlib.h>
int main() {
int n;
char *p;
printf("Enter Size of String:\n");
scanf("%d",&n);

p=(char*)malloc(n*sizeof(char)); //DMA
printf("ENTER STRING :\n");
scanf(" ");
gets(p);
printf("You ENTERE = %s",p);
free(p);
return 0;
}
