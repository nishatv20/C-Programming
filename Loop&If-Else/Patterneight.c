#include<stdio.h>
main() {
for(int i=1; i<=5; i++) {

        for(int j=1; j<=5; j++) {
            if(i==1 ||i==2 ||i==4 || i==5 || j==1 || j==2 || j==4 || j==5) {
                printf("1");
            }
            else{
                printf("0");
            }
        }
    printf("\n");
}
}
