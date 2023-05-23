#include<stdio.h>
main(){
int dig,num,cube,count=1;
int sum=0;

while(count<=500){
         num=count;
        while(num){

            dig=num%10;
            cube= (dig*dig*dig);
            sum=sum+cube;

            num = num/10;
        }
        if(count==sum){
            printf("Number %d is Armstrong\n", count);
        }


    count++;
}
}
