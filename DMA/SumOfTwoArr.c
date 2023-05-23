#include<stdio.h>
#include<stdlib.h>
int main() {
  int *p1,*p2,n1,n2,i;
  printf("ENTER SIZE OF FIRST ARRAY :\n");
  scanf("%d",&n1);
  printf("ENTER SIZE OF SECOND ARRAY :\n");
  scanf("%d",&n2);

  p1 = (int*)malloc(n1*sizeof(int));
  for(i=0; i<n1; i++) {
    printf("ENTER ELEMENT ARR1:\n");
    scanf("%d",&p1[i]);
  }

  p2 = (int*)malloc(n2*sizeof(int));
  for(i=0; i<n2; i++) {
    printf("ENTER ELEMENT ARR2:\n");
    scanf("%d",&p2[i]);
  }

  printf("SUM :\n");
  if(n1==n2) {
    for(i=0;i<n1; i++) {
        printf("%d\n",p1[i]+p2[i]);
    }
  }

  else {
    printf("SIZE OF ARRAY IS DIFFERENT");
  }

  free(p1);
  free(p2);
  return 0;
}
