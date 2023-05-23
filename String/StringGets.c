#include<stdio.h>
main() {
char arr[100];
printf("Enter The Name :");
gets(arr);

for(int i=0; arr[i]!=0; i++) {
    printf("%c",arr[i]);
}
printf("\n");
printf("\n NAme is %s ",arr);
printf("\n");
puts(arr);
return 0;
}
