#include<stdio.h>
int main() {
    int n;
    printf("Enter Size of Array \n");
    scanf("%d",&n);
    int *p = (int *)malloc(n*sizeof(int));

    for(int i=0; i<n; i++) {
        printf("ENTER \n");
        scanf("%d",&p[i]);
    }
    for(int i=0; i<n; i++) {
        printf("%d ",p[i]);
    }

    free(p);
return 0;
}
