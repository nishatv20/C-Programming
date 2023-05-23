#include<stdio.h>

main() {

int sal,da,ra;
float tot;

    printf("Enter Basic Salary : \n");
    scanf("%d", &sal);

    printf("Dearness Allowance of Ramesh\n");
    da = (sal*40)/100 ;
    printf("%d \n" , da);

    printf("Rent allowance of Ramesh\n");
    ra = (sal*20)/100;
    printf("%d \n");

    printf("Total Salary of Ramesh\n ");
    tot = sal + da + ra ;
    printf("%f", tot);
}
