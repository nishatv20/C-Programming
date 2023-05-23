#include<stdio.h>
main() {
int units;
float bill;
float unit_rate;
float final_bill;
float surcharge ;
printf("Enter Electricity Unit consumed: \n");
scanf("%d", &units);

if(units>0 && units<=50) {
    unit_rate = 0.50 ;
    bill = units * unit_rate ;
    surcharge = (bill *20)/100;
    final_bill = bill + surcharge ;
    printf("Electricity Bill is : %.2f", final_bill);
}

else if(units>50 && units<=150) {
    unit_rate = 0.75 ;
    bill = units * unit_rate ;
    surcharge = (bill * 20)/100;
    final_bill = bill + surcharge ;
    printf("Electricity Bill is : %.2f", final_bill);
}

else if(units>150 && units<=250) {
    unit_rate = 1.20 ;
    bill = units * unit_rate ;
    surcharge = (bill*20)/100 ;
    final_bill = bill + surcharge ;
    printf("Electricity Bill is : %.2f", final_bill);
 }
 else {
    unit_rate = 1.50 ;
    bill = units *unit_rate;
    surcharge = (bill*20)/100;
    final_bill = bill + surcharge ;
    printf("Electricity Bill is : %.2f", final_bill);
 }
}
