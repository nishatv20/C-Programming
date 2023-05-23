#include<stdio.h>
main() {
char name[100];
printf("Enter Name :");
gets(name);
char *ptr;
ptr = name;
while(*ptr!='\0') {
    printf("%c",*ptr);
    ptr++;
}
printf("\n");
return 0;
}
