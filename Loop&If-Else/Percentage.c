#include<stdio.h>
main() {
    int phy, chem, eng, math, it ;
    int per ;
    printf("Enter Marks Obtained in Physics: \n ");
    scanf("%d", &phy);

    printf("Enter Marks Obtained in Chemistry: \n ");
    scanf("%d", &chem);

    printf("Enter Marks Obtained in English: \n ");
    scanf("%d", &eng);

    printf("Enter Marks Obtained in Maths: \n ");
    scanf("%d", &math);

    printf("Enter Marks Obtained in IT: \n ");
    scanf("%d", &it);

    per = (phy + chem + eng + math + it)/5 ;

    if(per >= 60) {
        printf("Student scored in First Division");
    }

    else if(per >= 50 && per<=59) {
        printf("Student scored in Second Division");
    }

    else if (per>=40 && per<=49) {
        printf("Student scored in Third Divison");
    }

    else{
        printf("Student failed.....");
    }
}
