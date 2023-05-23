#include<stdio.h>
void makeSwap(int *x, int *y) {
int temp = *x;
*x = *y;
*y = temp;
}
int main() {
int n1 =11;
int n2 =22;
makeSwap(&n1, &n2);   //CALL BY REFERENCE ----
printf("N1 : %d and N2 : %d", n1, n2);
return 0;
}
