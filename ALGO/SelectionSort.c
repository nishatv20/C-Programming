#include<stdio.h>
void selectionSort(int arr[], int n) {
    int minIndex,i,j;
    for(i=0; i<n; i++) {
        minIndex=i;
        for(j=i+1; j<n; j++) {
            if(arr[minIndex] > arr[j]) {
                minIndex = j;
            }
        }
        /* SWAPPING CODE*/
        int temp = arr[i];
        arr[i] = arr[minIndex];
        arr[minIndex] = temp;
    }

    printf("SORTED ARRAY IS :\n");
    for(i=0; i<n; i++) {
    printf("%d ",arr[i]);
    }
}

    int main() {
    int arr[50];
    int size;
    printf("ENTER SIZE OF ARRAY :\n");
    scanf("%d",&size);
    printf("\n+++++++++++++++++++++++++++++++++++++++++++++++++++++++\n");
    printf("ENTER ELEMENETS INTO ARRAY \n");
    for(int i=0;i<size; i++) {
    printf("ENTER VALUE :\n");
    scanf("%d",&arr[i]);
    }
    printf("\n+++++++++++++++++++++++++++++++++++++++++++++++++++++++\n");
    selectionSort(arr,size);
    return 0;
    }

