#include<stdio.h>
#include<stdlib.h>
int main() {
int n,i,len=0;
char *p;
printf("ENTER SIZE OF STRING:\n");
scanf("%d",&n);

p = (char*)malloc(n*sizeof(char));     //DMA
printf("ENTER STRING:\n");
scanf(" ");
gets(p);

for(i=0; p[i]!='\0'; i++) {
    len++;
}

printf("LENGTH OF STRING IS : %d\n",len);
free(p);
return 0;
}
