#include<stdio.h>
main() {
int i,j,k,rows,cols;
printf("Enter Number of Rows :");
scanf("%d",&rows);
printf("Enter Number of Cols :");
scanf("%d",&cols);

for(i=1; i<=rows; i++) {
    for(k=i; k<rows; k++) {
        printf(" ");
    }
    for(j=1; j<=(2*i-1); j++) {
        if(j==1 || i==rows || j==(2*i-1))
            {
            printf("*");
        }
        else {
            printf(" ");
        }
    }
    printf("\n");
}
}
