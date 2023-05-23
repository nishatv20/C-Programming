#include<stdio.h>
main() {
for(int i =1; i<=5; i++) {

        for(int j=1; j<=5; j++) {
            if(j==2 || j==4) {
                printf("1");
            }
            else {
                printf("0");
            }
        }
    printf("\n");
}
}
