#include<stdio.h>
#include<math.h>
main() {
int side1,side2,side3 ;
float s ;
double cal ;
double area;

printf("Enter three sides of triangle:");
scanf("%d%d%d", &side1,&side2,&side3);

printf("Semi perimeter of triangles is :");
s = (side1 + side2 + side3 ) / 2 ;
printf("%f",s);

printf("\nArea of Triangle is :");
cal = s * (s-side1) * (s-side2) * (s-side3) ;
area = sqrt(cal);
printf("%.2lf",area);
}
