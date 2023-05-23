#include<stdio.h>

void printArray(int a[]) {
    printf("\n------------------------------\n");
for(int j=0; j<5; j++) {
    printf("%d %d %d\n", a[j], j, &a[j]);
}
printf("\n----------------------------------\n");
}
int sumArray(int a[]) {
    printf("\n----------------------------------\n");
    int sum=0;
for(int j=0; j<5; j++) {
    sum = sum + a[j];
}
return sum;
}
int main() {
int arr[5];
for(int i=0; i<5; i++) {
    printf("ENTER VALUE :");
    scanf("%d",&arr[i]);
}
printArray(arr);
int res = sumArray(arr);
printf("\nSum Of ARRAY : %d", res);
return 0;
}
