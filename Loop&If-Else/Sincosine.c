#include<stdio.h>
#include<math.h>
main() {
float angle ;
float sum ;
float pie = 3.14;
printf("Enter an Angle : \n");
scanf("%d",&angle);

angle = angle * (pie/180);
sum = (pow(sin(angle),2) + pow(cos(angle),2));

if(sum == 1) {
    printf("Sum of Both angles is 1:");
}
else {
    printf("Sum of Angles is not 1 :");
}
}
