#include<Stdio.h>
main() {
int n ;
printf("Enter a number : \n");
scanf("%d", &n);

if(n%2 == 0) {
    printf("Number is Even");
}

if(n%2 == 1) {
    printf("Number is Odd");
}
}
