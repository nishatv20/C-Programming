#include<stdio.h>
void printArray(int a[]) {
for(int j=0; j<5; j++) {
    printf("%d %d %d\n", a[j], j, &a[j]);
}
}

int getMax(int a[]) {
    int max=0;
for(int j=0; j<5; j++) {
    if(a[j]>max){
        max=a[j];
    }
    else {max=max;}
}
return max;
}
int main() {
int arr[5];
for(int i=0; i<5; i++) {
    printf("Enter ELEMENTS: ");
    scanf("%d",&arr[i]);

}
printArray(arr);
printf("\n----------------------------\n");
int res = getMax(arr);
printf("Maximum Value is : %d", res);
}
