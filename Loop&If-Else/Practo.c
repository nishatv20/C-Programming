#include<stdio.h>
main() {
int num1;
float num2;
double num3;


printf("Enter Number integer: \n");
scanf("%d", &num1);
printf("%d\n",num1);

printf("Enter Number In decimal:\n");
scanf("%f",&num2);
printf("%f\n",num2);

printf("Enter Number in Double:\n");
scanf("%lf",&num3);
printf("%lf\n",num3);

printf("%d %f %lf", num1 ,num2, num3);
}
