#include<stdio.h>
void delElem(int arr[], int pos, int size) {

if(pos<0 || pos>size){
    printf("INVALID INPUT");
}
else {
    for(int i=pos-1; i<size-1; i++) {
        arr[i] =arr[i+1];
    }
}
size--;

printf("\n ELEMENTS OF ARRAY :");
for(int i=0; i<size; i++) {
    printf("%d \n",arr[i]);
}
}
int main() {
    int size;
printf("ENTER SIZE OF ARRAY :");
scanf("%d",&size);
int arr[size];
int i;


for(i=0; i<size; i++) {
    printf("Enter Values :");
    scanf("%d",&arr[i]);
}
int pos;
printf("Enter Position of Element :");
scanf("%d",&pos);

delElem(arr,pos,size);
return 0;
}
