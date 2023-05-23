#include<stdio.h>
main() {
for(int i=1; i<=9; i=i+2) {
    for(int k=9; k>=i; k=k-2){
        printf(" ");
    }
    for(int j=1; j<=i; j++) {
        if(i==j || i==9 ||j==1 ){
            printf("*");
        }
        else {
            printf(" ");
        }


}
 printf("\n");
}
}
