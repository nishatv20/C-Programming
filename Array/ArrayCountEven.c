#include<stdio.h>
void printArray(int a[]) {
for(int j=0; j<5; j++) {
    printf("%d %d %d\n", a[j], j, &a[j]);
}
}

int getEvenCount(int a[]) {
    int count=0;
for(int j=0; j<5; j++){
    if(a[j]%2==0){
        count = count+1;
    }
}
return count;
}
main() {
int arr[5];
for(int i=0; i<5; i++) {
    printf("ENTER VALUE :");
    scanf("%d",&arr[i]);
}
printf("\n---------------------------------------\n");
printArray(arr);
printf("\n---------------------------------------\n");
int res = getEvenCount(arr);
printf("EVEN COUNT : %d", res);
}
