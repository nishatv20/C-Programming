#include<stdio.h>
main() {
int num1,num2;


printf("Enter Number 1 : \n");
scanf("%d",&num1);
printf("Enter Number 2 : \n");
scanf("%d",&num2);


switch(num1>=num2) {

case 1 :
    switch(num1>num2) {
     printf("Number 1 is Greater ...");
    break;

case 0 :
    printf("Numbers are Equal ...");
    break;
    }

}
}
