#include<stdio.h>
int main() {
    int i,j,N,k;
    printf("ENTER NUMBER OF ROWS :\n");
    scanf("%d",&N);
    for(i=1; i<=N; i++) {
            k=i;
        for(j=1; j<=i; j++) {
            printf("%d ",k);
        k= k+(N-j);
        }
        printf("\n");
    }
return 0;
}
