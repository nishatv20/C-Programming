#include<stdio.h>
main() {
for(int i=9; i>=1; i=i-2) {
for(int k=9; k>=i; k=k-2){
    printf(" ");
}

for(int j=i; j>=1; j--){
    printf("*");
}
printf("\n");
}
}
