#include<stdio.h>
main() {
int hard,tensile;
float carbon;
printf("Enter Hardness of Steel : \n");
scanf("%d",&hard);
printf("Enter Carbon content of Steel : \n");
scanf("%f",&carbon);
printf("Enter Tensile Strength of Steel : \n");
scanf("%d",&tensile);

if(hard>50 && carbon<0.7 && tensile>5600) {
    printf("Steel is of Grade 10...");
}

else if(hard >50 && carbon<0.7) {
    printf("Steel is of Grade 9...");
}

else if(carbon<0.7 && tensile>5600) {
    printf("Steel is of Grade 8...");
}

else if(hard >50 && tensile>5600) {
    printf("Steel is of Grade 7...");
}

else if(hard>50 || carbon<0.7 || tensile>5600) {
    printf("Steel is of Grade 6...");
}

else {
    printf("Steel is of Grade 5...");
}
}
