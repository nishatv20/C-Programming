#include<stdio.h>
main()
{
int emp=1;
float salar,rate = 12 ;
int hrs;
while(emp<=10){
        printf("\nEnter Working Hours of Emp %d: \n", emp);
scanf("%d",&hrs);
    if(hrs>40){
        hrs = hrs-40;
        salar = rate*hrs ;
          printf("OverTime Pay of Employee %d is : %f\n", emp, salar);
    }


    else {
        printf("\nEmp %d Not Eligible For Overtime\n", emp);
    }
        emp++;
}
}
