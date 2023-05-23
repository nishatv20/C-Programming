#include<stdio.h>
main() {
int month ;
int date ;
printf("Enter Month of Birth : \n");
scanf("%d",&month);
printf("Enter Date of Birth : \n");
scanf("%d",&date);

//For Capricon---------
if(month==12 && date>=22&& date<=31 || month==1 && date>=1 && date<=19) {
    printf("Capricon...");
}

else if(month==1 && date>=20 && date<=31 || month==2 && date>=1 && date<=17) {
    printf("Aquaris...");
}

else if(month==2 && date>=18 && date<=29 || month ==3 && date>=1 && date<=19) {
    printf("Pisces...");
}

else if(month ==3 && date>=20 && date<=31 || month ==4 && date>=1 && date<=19) {
    printf("Aries...");
}

else if(month ==4 && date>=20 && date<=30 || month==5 && date>=1 && date<=20) {
    printf("Taurus...");
}

else if(month==5 && date>=21 && date<=31 || month==6 && date>=1 && date<=20) {
    printf("Gemini...");
}

else if(month==6 && date>=21 && date<=30 || month==7 && date>=1 && date<=22){
    printf("Cancer");
}

else if(month==7 && date>=23 && date<=31 || month==8 && date>=1 && date<=22) {
    printf("Leo...");
}

else if(month==8 && date>=23 && date<=31 || month==9 && date>=1 && date<=22) {
    printf("Virgo...");
}

else if(month==9 && date>=23 && date<=30 || month==10 && date>=1 && date<=22) {
    printf("Libra...");
}

else if(month==10 && date>=23 && date<=31 || month==11 && date>=1 && date<=30) {
    printf("Scorpio");
}

else {
    printf("Sagittarius...");
}
}
