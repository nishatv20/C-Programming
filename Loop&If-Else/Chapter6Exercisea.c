#include<stdio.h>
main() {

for(int num=1; num<=300; num++) {
    int flag=0;
    for(int temp=2; temp<num; temp++){
        if(num%temp==0){
            flag=1;
            break;
        }
    }
    if(flag==0){
        printf("%d This is a Prime Number\n", num);
    }

}
}
