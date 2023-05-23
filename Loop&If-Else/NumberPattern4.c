#include<stdio.h>
main() {
for(int i=2; i<=10; i=i+2) {
        for(int j=2; j<=i; j=j+2){
            printf("%d",j);
        }

for(int z=i; z>2; z=z-2) {
    if(i==4 || i==6 || i==8 || i==10) {
        printf("%d", z-2);
    }
}
printf("\n");
}
}
