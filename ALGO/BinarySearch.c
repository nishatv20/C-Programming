#include<stdio.h>
int binarySearch(int arr[], int size, int element) {
int low,mid,high;
low=0;
high = size-1;
//Start Searching
while(low<=high){
   mid = (low+high)/2;
if(arr[mid]==element) {
    return mid;
}

if(arr[mid]<element) {
    low =mid+1;
}

else{
    high = mid-1;
}
}
//Something Ends
return -1;

}
int main() {

    //Sorted Array for Binary Search
    int arr[] = {1,3,5,56,64,73,123,225,444};
    int size;
    printf("Emter Size :\n");
    scanf("%d",&size);
    int element = 56;
    int searchIndex = binarySearch(arr,size,element);
    printf("The Element %d was found at index %d \n", element, searchIndex);

return 0;
}
