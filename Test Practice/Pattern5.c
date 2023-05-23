#include<stdio.h>
int main() {
    int i,j,x,y,n;
    printf("ENTER NUMBER OF ROWS :\n");
    scanf("%d",&n);
    for(i=1; i<=n; i++) {
        x=1;
        y=2;
        for(j=1; j<=i; j++) {
            if(i%2==0) {
                printf("%d ",y);
                y=y+2;
            }
            else {
                printf("%d ",x);
                x=x+2;
            }
        }
        printf("\n");
    }
return 0;
}
