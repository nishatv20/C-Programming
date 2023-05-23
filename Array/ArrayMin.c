#include<stdio.h>
void printArray(int a[]) {
    for(int j=0; j<5; j++) {
        printf("%d %d %d\n", a[j], j, &a[j]);
    }
}

int getMin(int a[]) {
    int min = a[0];
for(int j=1; j<5; j++) {
    if(a[j]<min) {
        min=a[j];
    }
}
return min;
}
main() {
int arr[5];
for(int i=0; i<5; i++) {
    printf("Enter VALUES :");
    scanf("%d",&arr[i]);
}
printf("\n------------------------------\n");
printArray(arr);
printf("\n------------------------------\n");
int res = getMin(arr);
printf("MINNIMUM : %d",res);
printf("\n------------------------------\n");
}
