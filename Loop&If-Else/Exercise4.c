#include<stdio.h>
main() {
float bmi;
float height;
float weight;
printf("Enter Height in metres : \n");
scanf("%f", &height);
printf("Enter Weight in KG : \n");
scanf("%f",&weight);

bmi = weight/(height*height) ;
printf("BMI of Person is : %.2f\n",bmi);
if(bmi<15) {
    printf("BMI Category : Starvation");
}

else if(bmi>=15.1 && bmi<=17.5) {
    printf("BMI Category : Anorexic");
}

else if(bmi>=17.6 && bmi<=18.5) {
    printf("BMI Category : UnderWeight");
}
else if(bmi>=18.6 && bmi<=24.9) {
    printf("BMI Category : Ideal");
}

else if(bmi>=25 && bmi<=25.9) {
    printf("BMI Category : Overweight");
}

else if(bmi>=30 && bmi<30.9) {
    printf("BMI Category : Obese");
}
else {
    printf("BMI Category : Morbidly Obese");
}
}
