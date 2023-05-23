#include<stdio.h>
main() {
for(int i=1; i<=9; i=i+2) {
    for(int j=i; j<=9; j=j+2) {
        printf("%d",j);
    }
    printf("\n");
}
}
