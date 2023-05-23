#include<stdio.h>
void getWeekDay(int x) {
switch(x) {

case 1: printf("MONDAY");
break;

case 2: printf("TUESDAY");
break;

case 3: printf("WEDNESDAY");
break;

case 4: printf("THURSDAY");
break;

case 5: printf("FRIDAY");
break;

case 6: printf("SATURDAY");
break;

case 7: printf("SUNDAY");
break;

default: printf("NOT A VALID INPUT");
break;
}
}
main() {
int num;
printf("Enter Week Day  : ");
scanf("%d",&num);
getWeekDay(num);
return 0;
}
