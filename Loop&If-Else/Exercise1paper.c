#include<stdio.h>
main() {

float dim1, dim2,a1,a2,a3,a4,a5,a6,a7,a8 ;
dim1 = 1189;
dim2 = 841;

printf("The Dimensions of paper A(0) are : %f %f \n", dim1, dim2 );
a1 = dim1/2 ;
printf("The dimensions of paper A(1) are: %f %f \n", a1, dim2);

a2 = dim2/2;
printf("The Dimensions of paper A(2) are: %f %f \n", a1,a2);

a3 = a1/2;
printf("The Dimensions of paper A(3) are: %f %f \n", a3,a2);

a4 = a2/2;
printf("The Dimensions of paper A(4) are: %f %f \n", a3,a4);

a5 = a3/2;
printf("The Dimensions of paper A(5) are: %f %f \n", a5,a4);

a6 = a4/2;
printf("The Dimensions of paper A(6) are: %f %f \n", a5,a6);

a7 = a5/2;
printf("The Dimensions of paper A(7) are: %f %f \n", a7,a6);

a8 = a6/2;
printf("The Dimensions of paper A(8) are: %f %f \n", a7,a8);
}
