#include<stdio.h>
swap(double *x, double *y) {
float temp = *x;
*x = *y;
*y = temp;
}
main() {
double d1 = 1.234;
double d2 = 2.123;
swap(&d1, &d2);
printf("D1 : %lf and D2 : %lf", d1, d2);
return 0;
}
