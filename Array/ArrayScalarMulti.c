#include<stdio.h>
void printArray(int A[][3]){
    int i,j;
for(i=0; i<3; i++) {
    for(j=0; j<3; j++) {
        printf("i : %d  j : %d  = %d %d |", i, j, A[i][j], &A[i][j]);
    }
    printf("\n");
}
}
int main() {
int A[3][3];
int B[3][3];
int i,j,num;
printf("Enter a Number for Multiplication :");
scanf("%d", &num);

for(i=0; i<3; i++) {
    for(j=0; j<3; j++) {
        printf("ENTER VALUES : \n");
        scanf("%d",&A[i][j]);
    }
}

/* MULTIPLICATION LOOP */

for(i=0; i<3; i++) {
    for(j=0; j<3; j++) {
        B[i][j] = num * A[i][j];
    }
}

printArray(A);
/* PRINTING RESULTANT ARRAY*/
printf("\n------------------------------------------------\n");
printArray(B);
printf("\n------------------------------------------------\n");
return 0;
}
