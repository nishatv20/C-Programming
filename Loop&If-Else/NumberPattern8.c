#include<stdio.h>
main() {
int diff,value,N;
for(int i=1; i<=5; i++) {
        diff=5-1;
        value=i;
        for(int j=1; j<=i; j++) {
            printf("%d",value);
            value = value+diff;
            diff-- ;

        }
    printf("\n");
}

}
