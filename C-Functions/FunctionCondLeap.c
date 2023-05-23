#include<stdio.h>
void getyear(int x) {
(x%4==0 && x%100 !=0) ? printf("Leap Year") :(x%400==0) ? printf("Leap year"): printf("Not a Leap Year");
}
int main() {
int year;
printf("Enter a year :");
scanf("%d",&year);
getyear(year);
return 0;
}
