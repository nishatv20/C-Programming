#include<stdio.h>
main() {
char arr[100];
printf("Enter the Name \n");
scanf("%s",&arr);

for(int i=0; arr[i]!=0; i++) {
    printf("%c",arr[i]);
}
}
