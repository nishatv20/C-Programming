#include<stdio.h>

void printArray(int a[]){
for(int i=0; i<5; i++) {
    printf("%d ", a[i]);
}
}

void enterElem(int a[]) {
a[2] = 4;
}
int main() {
int arr[5];
for(int i=0; i<5; i++) {
    printf("ENTER VALUES :");
    scanf("%d",&arr[i]);
}
printf("\n----------------------------------\n");
printArray(arr);
printf("\n----------------------------------\n");
enterElem(arr);
printf("\n----------------------------------\n");
printArray(arr);
printf("\n----------------------------------\n");
return 0;
}
