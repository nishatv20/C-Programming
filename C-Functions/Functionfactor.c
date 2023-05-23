#include<stdio.h>
void getfactors(int x) {
    int res,temp=1;
    int num = x;
    while(temp<=x) {
        if(num%temp==0) {
            res = temp;
        printf("%d \n",res);
        }
        temp++;

    }
}
main() {
int num;
printf("Enter a Number : \n");
scanf("%d",&num);
getfactors(num);
return 0;
}
