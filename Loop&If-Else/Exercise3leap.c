#include<stdio.h>
main() {
int year;
printf("Enter the year :");
scanf("%d",&year);

if(year % 4 == 0) {
    printf("This is a leap year...");
}

else{
    printf("This is not a leap year...");
}
}
