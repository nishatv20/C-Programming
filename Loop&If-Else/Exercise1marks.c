#include<stdio.h>
main() {
    float marks , total,avg,per;
    float sub1,sub2,sub3,sub4,sub5 ;

    printf("Enter Marks Obtained in all Subjects: \n");
    printf("Enter marks obtained in sub1\n");
    scanf("%f\n",&sub1);
    printf("Enter marks obtained in sub2");
    scanf("%f\n",&sub2);
    printf("Enter marks obtained in sub3");
    scanf("%f\n",&sub3);
    printf("Enter marks obtained in sub4");
    scanf("%f\n",&sub4);
    printf("Enter marks obtained in sub5");
    scanf("%f\n",&sub5);

    total = sub1 + sub2 + sub3 + sub4 + sub5 ;
    printf("\nTotal Marks is : %f",total);

    per = (total/500)*100;
    printf("\n Percentage Obtained: %f",per);
}
