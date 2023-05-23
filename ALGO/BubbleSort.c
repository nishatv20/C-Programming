#include<stdio.h>
void bubbleSort(int a[],int n){
int i,j,temp;
for(i=0; i<n-1; i++) {
    for(j=0; j<n-i-1; j++) {
        if(a[j]>a[j+1]) {
            temp = a[j];
            a[j] = a[j+1];
            a[j+1] = temp;
        }
    }
}
printf("SORTED ARRAY IS :\n");
for(i=0; i<n; i++) {
    printf("%d ", a[i]);
}
}
int main() {
int i,n;
int arr[50];
printf("ENTER SIZE OF ARRAY :\n");
scanf("%d",&n);
printf("\n++++++++++++++++++++++++++++++++++++++++++++++++++++++\n");
for(i=0; i<n; i++) {
    printf("ENTER VALUE :\n");
    scanf("%d",&arr[i]);
}
printf("\n++++++++++++++++++++++++++++++++++++++++++++++++++++++\n");
printf("ARRAY VALUES ARE :\n");
for(i=0; i<n; i++) {
    printf("%d ",arr[i]);
}
printf("\n++++++++++++++++++++++++++++++++++++++++++++++++++++++\n");
bubbleSort(arr,n);
printf("\n++++++++++++++++++++++++++++++++++++++++++++++++++++++\n");
return 0;
}
