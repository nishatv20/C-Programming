#include<stdio.h>
main() {
int sp,cp ;
printf("Enter Selling Price : \n");
scanf("%d", &sp);
printf("Enter Cost price : \n");
scanf("%d", &cp);

if(sp > cp) {
    printf("Seller has made profit....");
}

else if (sp < cp) {
    printf("Seller has not made profit....");
}

else {
    printf("Items sold at cost price....");
}
}
