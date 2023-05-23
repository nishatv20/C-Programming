#include<stdio.h>
main() {
float far,cel;

printf("Enter Temp in Fahrenheit - \n");
scanf("%f",&far);
cel = (far-32)*5/9 ;
printf("Temp in Celcius is : \%f", cel);
}
