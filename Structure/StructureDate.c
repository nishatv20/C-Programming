#include<stdio.h>
struct date {
int day;
int month;
int year;
};
void printDates(struct date d[]) {
for(int i=0; i<2; i++) {
    printf("%d ",d[i].day);
    printf("%d ",d[i].month);
    printf("%d ",d[i].year);
    printf("\n");
}
}

int main() {
    struct date d[2];
    for(int i=0; i<2; i++) {
        printf("ENTER DAY :\n");
        scanf("%d",&d[i].day);
        printf("ENTER MONTH : \n");
        scanf("%d",&d[i].month);
        printf("ENTER YEAR : \n");
        scanf("%d",&d[i].year);
    }
    printf("\n++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++\n");
    printDates(d);
    printf("\n+++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++\n");
    int i=0;
    if(d[i].day==d[i+1].day && d[i].month==d[i+1].month && d[i].year == d[i+1].year) {
        printf("DATES ARE EQUAL");
    }
    else {
        printf("DATES ARE NOT EQUAL");
    }

return 0;
}
