
#include<stdio.h>
void printArray(int A[][3]){
int i,j;
for(i=0; i<3; i++){
    for(j=0; j<3; j++){
        printf("i: %d j: %d = %d %d |", i, j, A[i][j], &A[i][j]);
    }
    printf("\n");
}
}
int main() {
int A[3][3];
int i,j,size ;
printf("ENTER SIZE OF ARRAY :");
scanf("%d",&size);
for(i=0; i<3; i++) {
    for(j=0; j<3; j++){
        printf("ENTER VALUES :");
        scanf("%d",&A[i][j]);
    }
}
printf("\n--------------------------------------------------\n");
printArray(A);
printf("\n--------------------------------------------------\n");
for(i=0; i<3; i++) {
        for(j=0; j<3; j++) {
            if(i+j == ((size+1)-2)){
                printf("MINOR DIAGONAL ELEMENTS : %d\n", A[i][j]);
            }

        }
    }
    printf("\n--------------------------------------------------\n");
    return 0;
}
