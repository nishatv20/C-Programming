#include<stdio.h>
void printArray(int a[]){
for(int j=0; j<5; j++) {
    printf("%d %d %d \n", a[j], j, &a[j]);
}
}

void copyArray(int a[]) {
    int b[5];
for(int j=0; j<5; j++) {
     b[j] = a[j];
}

for(int k=0; k<5; k++) {
    printf(" COPY OF ARRAY IS :%d\n ", b[k]);
}
}

int main() {
int arr1[5];
for(int i=0; i<5; i++) {
    printf("ENTER VALUE :");
    scanf("%d",&arr1[i]);
}
printf("\n---------------------------\n");
printArray(arr1);
printf("\n---------------------------\n");
copyArray(arr1);
printf("\n---------------------------\n");
return 0;
}
