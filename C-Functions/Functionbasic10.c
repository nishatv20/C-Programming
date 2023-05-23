#include<stdio.h>

  int total,percent,average;
    void getTotal(int x, int y, int z, int a, int b) {
        total = x+ y+ z+ a+ b;
        printf("TOTAL IS : %d\n", total);
    }

    void getAverage(int x, int y, int z, int a, int b) {
        average = (x+ y+ z+ a+ b)/5 ;
        printf("AVERAGE IS : %d\n", average);
    }

    void getPercent(int x, int y, int z, int a, int b) {
    percent = (x+ y+ z+ a+ b)/5;
    printf("PERCENTAGE IS : %d %\n", percent);
    }
main(){

    int s1,s2,s3,s4,s5;
    printf("Enter Marks of Subjects : ");
    scanf("%d %d %d %d %d", &s1, &s2, &s3, &s4, &s5);

    getTotal(s1,s2,s3,s4,s5);
    getAverage(s1,s2,s3,s4,s5);
    getPercent(s1,s2,s3,s4,s5);
}
