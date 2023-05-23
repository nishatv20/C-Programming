#include<stdio.h>
void printArray(int A[]){
for(int i=0; i<5; i++) {
    printf("%d %d %d \n",A[i], i, &A[i]);
}
}
void sepElement(int a[]) {
    int b[5];
    int c[5];
    int i,j=0,k=0;
    for(i=0; i<5; i++) {
        if(a[i]%2 ==0) {
            b[j] = a[i];
            j++;
        }
        else {
            c[k] = a[i];
            k++;
        }
    }

    for(int z=0; z<j; z++) {
        printf("%d ",b[z]);
    }
   printf("\n----------------------------------------\n");
    for(int z=0; z<k; z++) {
        printf("%d ",c[z]);
    }
}
main() {
int arr[5];
for(int i=0; i<5; i++) {
    printf("ENTER ELEMENTS :");
    scanf("%d",&arr[i]);
}
printf("\n----------------------------------------\n");
printArray(arr);
printf("\n----------------------------------------\n");
sepElement(arr);
printf("\n----------------------------------------\n");
}
