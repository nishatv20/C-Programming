#include<stdio.h>
main() {
float len,bre,rad,are1,per1,are2,per2 ;
float pie = 3.14;
printf("Enter length of triangle : \n");

scanf("%f ", &len);
printf("Enter breadth of triangle : \n");
scanf("%f", &bre);

are1 = len*bre ;
per1 = (len + bre)*2 ;

printf("\n************************************\n");
printf("The Area of Triangle :       %f\n", are1 );
printf("\n************************************\n");
printf("The Breadth of Triangle :    %f\n", per1);
printf("\n************************************\n");
printf("\nEnter Radius of circle \n :");
scanf("%f ",&rad);

are2 = pie * rad * rad ;
per2 = 2 * pie * rad ;
printf("\n************************************\n");
printf("Area of Circle is :          0.2%f\n", are2);
printf("\n************************************\n");
printf("Perimeter of circle is :     %f\n", per2);
printf("\n************************************\n");
}
