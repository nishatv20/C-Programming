#include<stdio.h>
main() {
  int num,fact=1;
  printf("Enter a Number : \n");
  scanf("%d",&num);
  int i=num;
  while(i!=0){
    fact= fact*i;
    i--;
  }
  printf("\nFactorial of a Number is : %d",fact);
}
