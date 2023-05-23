#include<stdio.h>
void printArray(int A[]){
for(int i=0; i<5; i++) {
    printf("%d %d %d \n",A[i], i, &A[i]);
}
}

void mergeArray(int a[], int b[]) {
int c[10];
int i,j;
for( i=0; i<5; i++) {
    c[i] = a[i];
}

for( j=0; j<5; j++) {
    c[i] = b[j];
    i++;
}
for(int k=0; k<10; k++) {
    printf("%d ", c[k]);
}
}
int main() {
int arr1[5];
int j;
for(j=0; j<5;j++){
    printf("Enter ARRAY 1 : ");
    scanf("%d",&arr1[j]);
}
int arr2[5];
int i;
for(j=0; j<5; j++) {
    printf("Enter ARRAY 2 : ");
    scanf("%d",&arr2[j]);
}
printf("\n----------------------------------------\n");
printArray(arr1);
printf("\n----------------------------------------\n");
printArray(arr2);
printf("\n----------------------------------------\n");
mergeArray(arr1, arr2);
printf("\n----------------------------------------\n");
return 0;
}
