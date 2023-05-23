#include<stdio.h>
 main() {
 for(int i=1; i<=9; i=i+2){
        for(int k=9; k>=i; k=k-2){
            printf(" ");
        }
        for(int j=1; j<=i; j++) {
            printf("*");
        }
 printf("\n");
 }

 for(int x=9; x>=1; x=x-2){
        for(int y=x; y<=9; y=y+2){
            printf(" ");
        }
        for(int z=x; z>=1; z--){
            printf("*");
        }
    printf("\n");
 }
 }
