#include<stdio.h>
#include<stdbool.h>
bool checkYear(int x) {
    return(((x%4==0) && (x%100!=0)) || (x%400==0));
}
main() {
int year ;
printf("Enter Year :");
scanf("%d",&year);
checkYear(year)?printf("LEAP YEAR"):printf("NOT A LEAP YEAR");
return 0;
}
