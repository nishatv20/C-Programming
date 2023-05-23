#include<stdio.h>
void printArray(int a[]) {
for(int j=0; j<5; j++) {
    printf("%d %d %d\n", a[j], j, &a[j]);
}
}

int getNegCount(int a[]) {
    int count=0;
for(int j=0; j<5; j++) {
    if(a[j] <0) {
        count++;
    }
}
return count;
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
int res = getNegCount(arr);
printf("NEGATIVE COUNT : %d", res);
printf("\n----------------------------------\n");
return 0;
}
