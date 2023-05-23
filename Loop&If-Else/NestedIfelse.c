#include<stdio.h>
main() {
int marks ;
printf("Enter marks : \n");
scanf("%d",&marks);

if(marks>40) {
    if(marks>80) {
        printf("Passed in First Grade...");
    }

    else {
        printf("Passed ...");
    }
}

else {
    if(marks<20) {
        printf("Very Poor Performance...");
    }
    else {
        printf("Failed in Examination...");
    }
}
}
