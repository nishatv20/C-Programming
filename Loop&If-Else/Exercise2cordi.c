#include<stdio.h>
#include<math.h>
main() {
float x,y;
float r, phie ;
float pi = 3.14;

printf("Enter the Cartesian co-ordinates");
scanf("%f%f \n",&x,&y);

r = sqrt(x*x + y*y);
phie = atan(y/x); //Radian
phie = phie * (180.0/pi);   //Radian to Degree Conversion


printf("Coordinates in Polar form are: ");
printf("%.f% .f", r, phie);
}
