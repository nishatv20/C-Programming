#include<stdio.h>
main(){
    int year;
    printf("Enter a Year : \n");
    scanf("%d",&year);

    (year%4==0) ? printf("This is Leap Year ....") : printf("This is not a Leap Year ...");
}
