#include<stdio.h>
main() {
    void getTable(int x) {
    for(int i=1; i<=10; i++) {
        int pro = x * i;
        printf(" %d * %d = %d \n", x,i,pro);
    }
    }
int num;
printf("Enter a Number :");
scanf("%d",&num);
getTable(num);
return 0;
}
