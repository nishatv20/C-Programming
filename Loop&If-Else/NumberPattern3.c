#include<stdio.h>
 main() {
 for(int i=1; i<=9; i=i+2) {
        for(int j=1; j<=i; j=j+2){

            printf("%d",j);
        }
        for(int z=i; z>1; z=z-2){
                if(i==3 ||i==5 || i==7 || i==9) {
                    printf("%d",z-2);
                }

        }
    printf("\n");
 }
 }
