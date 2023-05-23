#include<stdio.h>
void printArray(int a[]) {
    printf("VALUE  INDEX  ADDRESS\n");
for(int i=0; i<5; i++) {
    printf("%d      %d      %d\n",a[i], i, &a[i]);
}
}
int searchArray(int a[],int x) {
for(int i=0; i<5; i++) {
    if(a[i]==x) {
        printf("ELEMENT IS AT INDEX NO : %d AND ADDRESS : %d", i, &a[i] );
    }
}
}
int main() {
int arr[5];
for(int i=0; i<5; i++) {
printf("ENTER VALUE :");
scanf("%d", &arr[i]);
}
printf("\n--------------------------------\n");
int num;
printf("ENTER NUMBER FOR SEARCH :");
scanf("%d",&num);
printf("\n--------------------------------\n");
printArray(arr);
printf("\n-------------------------------------------------\n");
searchArray(arr, num);
printf("\n-------------------------------------------------\n");
return 0;

}
