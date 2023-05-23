#include<stdio.h>
main() {
    float x,i;
for(int y=1; y<=6; y++){
    for(x=5.5; x<=12.5; x=x+0.5) {
        i = 2 + (y+ (0.5*x));
        printf("\n %d  %f  = %f \n", y, x, i);
    }
}
}
