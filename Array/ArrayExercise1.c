#include<stdio.h>
void printArray(int a[]) {
    for(int j=0; j<5; j++) {
      printf("%d %d %d\n", a[j], j, &a[j]);
    }
}

void printNegative(int a[]) {

for(int j=0; j<5; j++) {
    if(a[j]<0) {
        printf("\nNEGATIVE ELEMENT :%d\n", a[j]);
    }
}
}
main() {
int arr[5];
for(int i=0; i<5; i++) {
printf("Enter ELEMENTS:");
scanf("%d",&arr[i]);
}
printf("\n----------------------------------------\n");
printArray(arr);
printf("\n----------------------------------------\n");
printNegative(arr);
}
