#include<stdio.h>
main() {
int ram,shyam,ajay ;
printf("Enter age of Ram : \n");
scanf("%d",&ram);
printf("Enter age of Shyam : \n");
scanf("%d", &shyam);
printf("Enter age of Ajay : \n");
scanf("%d", &ajay);

if(ram<shyam && ram<ajay) {
    printf("Ram is youngest of all....");
}

else if(shyam<ram && shyam<ajay) {
    printf("Shyam is youngest of all....");
}

else {
    printf("Ajay is youngest of all....");
}
}
