#include<stdio.h>
main() {
int i,k,j,rows,cols;
printf("Enter Number of Rows :");
scanf("%d",&rows);
printf("Enter Number of Columns :");
scanf("%d",&cols);
for(i=1; i<rows;i++) {
    for(k=i; k<rows; k++) {
        printf(" ");
    }
    for(j=1; j<=(2*i-1); j++) {
        printf("*");
    }
    printf("\n");
}
}
