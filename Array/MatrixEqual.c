#include<stdio.h>
void printArray(int A[][3]) {
int i,j;
for(i=0; i<3; i++) {
        for(j=0; j<3; j++){
             printf(" i:%d j:%d = %d %d |", i, j, A[i][j], &A[i][j]);
        }
        printf("\n");
}
printf("\n");
}
int main() {
int A[3][3];
int B[3][3];
int i,j;

for(i=0; i<3; i++) {
    for(j=0; j<3; j++) {
        printf("Enter Value of Array 1:");
scanf("%d",&A[i][j]);
}
    }

    for(i=0; i<3; i++) {
    for(j=0; j<3; j++) {
        printf("Enter Value of Array 2:");
scanf("%d",&B[i][j]);
}
    }
         printf("\n------------------------------------------------------------------------\n");
         printArray(A);
              printf("\n------------------------------------------------------------------------\n");
              printArray(B);

              int isEqual = 1;
    /*LOGIC FOR EQUALITY*/
     for(i=0; i<3; i++) {
        for(j=0; j<3; j++) {
            if(A[i][j]!=B[i][j]){
                isEqual=0;
                break;
            }

        }
     }
if(isEqual==1) {
    printf("MATRICES ARE EQUAL");
}
else {
    printf("MATRICES ARE NOT EQUAL");
}
    return 0;
}

