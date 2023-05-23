#include<stdio.h>
float x,meter,kilo;
void getMeter(float x) {
meter = x/100;
printf("Length in Meters : %.2f\n",meter);
}

void getKilo(float x) {
kilo = x/10000;
printf("Length in KiloMeters : %.2f\n",kilo);
}
main() {
float len;
printf("Enter Length In CM :");
scanf("%f",&len);

getMeter(len);
getKilo(len);
}
