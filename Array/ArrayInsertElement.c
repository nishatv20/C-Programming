#include<stdio.h>
void printArray(int a[]) {
for(int i=0; i<5; i++) {
    printf("%d ",a[i]);
}
}

void inserElement(int a[], int x, int y) {
int b[6];
int index = y-1;
for(int i=0; i<index; i++) {
    b[i] = a[i];
}
b[index] = x;
int j,k=index+1;
for(j=index; j<5; j++) {
    b[k] = a[j];
    k++;
}
for(int i=0; i<6; i++) {
    printf("%d ",b[i]);
}
}

int main() {
int arr[5] = {11,22,33,44,55};
int ele;
printf("ENTER AN ELEMENT :");
scanf("%d",&ele);

int pos;
printf("ENTER POSITION :");
scanf("%d",&pos);

printf("\n--------------------------------------\n");
printArray(arr);
printf("\n--------------------------------------\n");
inserElement(arr,ele,pos);
printf("\n--------------------------------------\n");
}
