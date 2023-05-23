#include<stdio.h>
main() {
int pop =100000;

for(int year=0; year<=10; year++) {
    pop = pop - (pop/100)*10 ;

    printf("Population %d Years Ago : %d\n",year,pop);
}
}
