#include<stdio.h>
main() {
int arr[5] = {-7,2,3,8,6};
int max1,max2;
max1 =arr[0];
max2 =arr[1];
int i,temp;

if(max1<max2) {
    temp = max1;
    max1= max2;
    max2 =temp;
}

for(i=2; i<5; i++) {
    if(arr[i]>max1) {
        max2 =max1;
        max1=arr[i];
    }

    else if(arr[i] >max2 && arr[i]!=max1){
        max2 = arr[i];
    }
}
printf("%d\n",max1);
printf("max 2 %d",max2);
}
