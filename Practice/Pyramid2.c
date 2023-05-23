#include<stdio.h>
main() {
int i,j,k,rows,cols;
printf("Enter Number of Rows :");
scanf("%d",&rows);
printf("Enter Number of Column :");
scanf("%d",&cols);

for(i=1; i<=rows; i++) {
    for(k=1; k<i; k++) {
        printf(" ");
    }
    for(j=1; j<= ((rows*2)-(2*i-1)); j++ ) {
        printf("*");
    }
    printf("\n");
 }
}
