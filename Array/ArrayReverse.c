#include<stdio.h>
void printArray(int a[]) {
for(int i=0; i<5; i++) {
printf("%d ", a[i]);
}
}
void getReverse(int a[]) {
    int c[5];
for(int i=0,j=4; j>=0&&i<5; i++,j--) {
    c[j] = a[i];
}
for(int j=0; j<5; j++) {
printf("REVERSE ARRAY : %d \n", c[j]);
}
}

int main() {
int arr[5];
for(int i=0; i<5; i++) {
   printf("ENTER VALUE:");
   scanf("%d", &arr[i]);
}
printf("\n-----------------------\n");
printArray(arr);
printf("\n-----------------------\n");
getReverse(arr);
printf("\n-----------------------\n");
return 0;
}
