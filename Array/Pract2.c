#include <stdio.h>

int main()
{
     int i,j,k;
     for(i=1; i<=9; i=i+2) {

        for(j=i; j<=9; j=j+2) {
            printf("%d", j);
        }
        printf("\n");
     }
}
