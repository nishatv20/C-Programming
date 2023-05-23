#include<stdio.h>
#include<stdlib.h>
int main() {
int n1,n2,i;
char *p1,*p2;

printf("ENTER SIZE OF FIRST STRING :\n");
scanf("%d",&n1);
p1 = (char*)malloc(n1*sizeof(char));   //DMA

printf("ENTER SIZE OF SECOND STRING :\n");
scanf("%d",&n2);
p2 = (char*)malloc(n2*sizeof(char));   //DMA

printf("ENTER STRING :\n");
scanf(" ");
gets(p1);

for(i=0; p1[i]!='\0'; i++) {
    p2[i] = p1[i];
}
p2[i]='\0';

printf("COPIED STRING : %s",p2);
free(p1);
free(p2);
return 0;
}
