#include<stdio.h>
void swap(float *x, float *y) {
     float temp = *x;
     *x = *y ;
     *y = temp;
}
int main() {
float f1 = 1.2;
float f2 = 1.3;
swap(&f1, &f2);
printf("F1 : %f  and  F2 : %f", f1,f2);
return 0;
}
