#include<stdio.h>

main() {

    int dis,met ;
    double fet,inc,cent;
    printf("Enter distance between Delhi and Mumbai:\n");
    scanf("%d \n", &dis);


    printf("Distance in Metres\n");
    met = dis *1000 ;
    printf("%d\n", met);

    printf("Distance in Feet\n");
    fet = dis *3280.83 ;
    printf("%lf\n",fet );

    printf("Distance in inches \n");
    inc = dis * 39370.07;
    printf("%lf\n",inc);

    printf("Distance in centimeters \n");
    cent = dis* 100000;
    printf("%lf\n",cent);

}
