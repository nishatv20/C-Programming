#include<stdio.h>
#include<stdlib.h>
int main() {
    int *ptr,n,i,max,min;
    printf("ENTER SIZE :\n");
    scanf("%d",&n);
    ptr = (int*)malloc(n*sizeof(int));  //DMA

    for(i=0; i<n; i++) {
        printf("ENTER ELEMENT :\n");
        scanf("%d",&ptr[i]);
    }

   max = ptr[0];
   min = ptr[0];
    for(i=0; i<n; i++) {
        if(ptr[i]>max) {
            max = ptr[i];
        }

        if(ptr[i]<min) {
            min = ptr[i];
        }
    }
    printf("MAXIMUM VALUE = %d\n",max);
    printf("MINIMMUM VALUE = %d",min);
    free(ptr);
    return 0;
}
