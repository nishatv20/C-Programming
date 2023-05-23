#include<stdio.h>
#include<stdlib.h>
int main() {
int *p,n,i,toSearch;

printf("Enter Size :\n");
scanf("%d",&n);
p=(int*)malloc(n*sizeof(int));      //DMA


for(i=0; i<n; i++) {
        printf("Enter Element\n");
    scanf("%d",&p[i]);
}
 printf("ENTER NUMBER YOU WANT TO SEARCH :\n");
 scanf("%d",&toSearch);

 for(i=0; i<n; i++) {
    if(p[i]==toSearch) {
        printf("NUMBER IS FOUND AT INDEX : %d",i);
        break;
    }

 }


free(p);
return 0;
}
