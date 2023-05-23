#include<stdio.h>
void printArray(int X[][3]){
int i,j;
for(i=0; i<3; i++) {
    for(j=0; j<3; j++) {
        printf("i: %d j: %d = %d %d |",  i, j, X[i][j], &X[i][j]);
    }
    printf("\n");
}
}
int main() {
    int A[3][3];
    int B[3][3];
    int i,j;
    int C[3][3];
    for(i=0; i<3; i++) {
        for(j=0; j<3; j++) {
            printf("Enter Array 1 :\n");
            scanf("%d",&A[i][j]);
        }
    }

    for(i=0; i<3; i++) {
        for(j=0; j<3; j++){
            printf("Enter Array 2 : \n");
            scanf("%d",&B[i][j]);
        }
    }

   printf("\n---------------------------------------------------------------\n");
   printArray(A);
   printf("\n---------------------------------------------------------------\n");
     printArray(B);
   printf("\n---------------------------------------------------------------\n");

    /* LOOP FOR SUM OF ARRAYS */
    for(i=0; i<3; i++) {
        for(j=0; j<3; j++) {
            C[i][j] = A[i][j] + B[i][j];
        }
    }
    printArray(C);
return 0;
}
