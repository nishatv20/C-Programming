#include<stdio.h>
main() {
int basic_salary ;
float hra,da,gross_salary ;

printf("Enter Basic Salary : \n");
scanf("%d", &basic_salary);
if(basic_salary <= 10000) {
    hra = (20 * basic_salary)/100 ;
    da = (90 * basic_salary)/100;
    gross_salary = basic_salary + hra + da ;
    printf("Gross Salary of Employee is : %.2f", gross_salary);
}

else if(basic_salary>10000 && basic_salary<=20000) {
    hra = (25 * basic_salary)/100;
    da = (95 * basic_salary)/100;
    gross_salary = basic_salary + hra + da ;
    printf("Gross Salary of Employee is : %.2f", gross_salary);
}
else if(basic_salary > 20000) {
    hra = (30 * basic_salary)/100 ;
    da = (95 * basic_salary)/100;
    gross_salary = basic_salary + hra + da ;
    printf("Gross Salary of Employee is : %.2f", gross_salary);
}

else {
    printf("Salary Entered is Out of Bound....");
}
}
