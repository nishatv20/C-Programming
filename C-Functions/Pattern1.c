#include<stdio.h>
main() {
for(int i=1; i<=5; i++) {
    for(int j=1; j<=5; j++) {
       if(i== j|| j ==(6-i)) printf("*");
       else printf(" ");
    }
    printf("\n");
}
}
