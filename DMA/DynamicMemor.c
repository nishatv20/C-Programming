#include<stdio.h>
int main() {
int n;
printf("ENTER SIZE OF ARRAY \n");
scanf("%d",&n);

//void *p = malloc(n *sizeof(int));
//int *q =(int *)p;
 int *p = (int *) malloc(n*sizeof(int));
for(int i=0;i<n; i++) {
    printf("ENTER \n");
    scanf("%d",&p[i]);
}

for(int i=0;i<n; i++)
 {
     printf("%d",p[i]);
 }
 free(p);
 return ;
}
