#include<stdio.h>
void printArray(int a[]) {
for(int i=0; i<5; i++) {
    printf("%d ", a[i]);
}
}
void mergeTwo(int a[], int b[]) {
    int c[10];
for(int i=0; i<5; i++) {
    c[i] = a[i];
}
for(int i=0,j=5; j<10&&i<5; i++, j++) {
    c[j] = b[i];
}

for(int l=0; l<10; l++) {
  printf("MERGED ARRAY : %d\n", c[l]);
}

}
int main() {
int arr1[5];
for(int i=0; i<5; i++) {
    printf("ENTER ARRAY 1 :");
    scanf("%d",&arr1[i]);
}
printf("\n------------------------\n");
int arr2[5];
for(int j=0; j<5; j++) {
    printf("ENTER ARRAY 2 :");
    scanf("%d",&arr2[j]);
}
printf("\n------------------------\n");
printArray(arr1);
printf("\n------------------------\n");
printArray(arr2);
printf("\n------------------------\n");
mergeTwo(arr1, arr2);
printf("\n------------------------\n");
return 0;
}
