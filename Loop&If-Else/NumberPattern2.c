#include<stdio.h>
main() {
for(int i=1; i<=9; i=i+2) {
for(int k=0; k<=i; k=k+2){
if(i==3 || i==7) {
    printf("%d", k+2);
}
}
    for (int j=1; j<=i; j=j+2){
            if(i==1 || i==5 || i==9) {
              printf("%d",j);
            }


            }

printf("\n");
}


    }



