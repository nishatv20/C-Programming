#include<stdio.h>
main() {
char ch;
printf("Enter Gender : \n");
scanf("%c", &ch);

if(ch == 'm') {
    printf("Gender is Male");
}

if(ch == 'M') {
printf("Gender is Male");
}

if(ch == 'f') {
    printf("Gender is Female");
}

if(ch == 'F') {
    printf("Gender is Female");
}

if(ch == 'o') {
    printf("Gender is Others");
}

if(ch == 'O') {
    printf("Gender is Others");
}
}
