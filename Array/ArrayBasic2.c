#include<stdio.h>
void printArray(int a[]) {
int j;
for(j=0; j<5; j++) {
    printf("%d %d %d\n", a[j], j, &a[j]);

}
}
main() {
int arr[5];
for(int i=0; i<5; i++) {
    printf("Enter Values of ARRAY : ");
    scanf("%d", &arr[i]);
}
printArray(arr);
}
