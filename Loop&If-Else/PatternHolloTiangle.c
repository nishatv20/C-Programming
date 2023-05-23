#include<stdio.h>
main() {
for(int i=1; i<=5; i++) {
for(int j=1; j<=i; j++) {
    if(j==2 && i==3 || j==2 && i==4 || j==3 && i==4 ) {
        printf(" ");
    }
    else{
        printf("*");
    }
}
printf("\n");}
}
