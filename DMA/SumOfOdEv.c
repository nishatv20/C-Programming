#include<stdio.h>
#include<stdlib.h>
int main() {
int *ptr,n,i,sumEv=0;
int sumod=0;
printf("Enter Size of Array :\n");
scanf("%d",&n);
ptr = (int*)malloc(n*sizeof(int));

for(i=0; i<n; i++) {
   printf("Enter Elements:\n");
   scanf("%d",&ptr[i]);
}
for(i=0; i<n; i++) {
    if(ptr[i]%2==0) {
        sumEv = sumEv + ptr[i];
    }
    else {
        sumod = sumod + ptr[i];
    }
}
printf("Sum of EVEN ELEMENTS is : %d\n",sumEv);
printf("Sum of ODD ELEMENTS is : %d\n",sumod);
free(ptr);
return 0;
}
