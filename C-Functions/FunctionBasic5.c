#include<stdio.h>
int dia,circ,area;

void getDia(int x) {
    dia = 2*x;
    printf("Diameter of Circle is : %d \n", dia);
}

void getCirc(int x) {
circ = 2*3.14*x ;
printf("Circumference of Circle is : %d \n",circ);
}

void getArea(int x) {
area = 3.14 * x * x;
printf("Area of Circle is : %d \n",area);
}
main(){
int rad;
printf("Enter Radius of Circle : \n");
scanf("%d",&rad);

getDia(rad);
getCirc(rad);
getArea(rad);
}
