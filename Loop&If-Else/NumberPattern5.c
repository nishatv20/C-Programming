#include<stdio.h>
main() {
for(int i=1; i<=5; i++) {
        for(int j=1; j<=i; j++){
            printf("%d",j);
        }
for(int z=i; z>1; z=z-1){
    if(i==2 || i==3 ||i==4 || i==5) {
        printf("%d",z-1);
    }
}
    printf("\n");
}
}
