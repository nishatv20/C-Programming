#include<stdio.h>
int main() {
    int i,j,k,z,n;
    printf("ENTER NUMBER OF ROWS :\n");
    scanf("%d",&n);
    for(i=1; i<=n; i++) {
             k=i;
             z=1;
        for(j=1; j<=i; j++) {
    if(i%2==0) {
        printf("%d ",k);
        k--;
    }


    else {

        printf("%d ", z);
        z++;
    }
        }
        printf("\n");
    }

return 0;
}
