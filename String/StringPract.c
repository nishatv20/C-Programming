#include<stdio.h>
int main() {
char arr[100];
printf("Enter The NAME:");
gets(arr);

for(int i=0; arr[i]!=0; i++) {
printf("%c",arr[i]);
}
printf("\n----------------------------\n");
printf("%s",arr);
printf("\n----------------------------\n");
puts(arr);
return 0;
}
