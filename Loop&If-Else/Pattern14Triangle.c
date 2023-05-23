#include<stdio.h>
main() {
for(int i=5; i>=1; i--) {
    for(int k=i; k<=5; k++) {
        printf(" ");
    }
    for(int j=1; j<=i; j++) {
        if(i==j ||i==5 ||j==1) {
            printf("*");
        }
        else {
            printf(" ");
        }
    }
    printf("\n");
}
}
