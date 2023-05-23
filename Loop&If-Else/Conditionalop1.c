#include<stdio.h>
main() {
int n1,n2,lar ;
printf("Enter First number : \n");
scanf("%d",&n1);
printf("Enter Second number : \n");
scanf("%d",&n2);

lar = (n1 > n2)?n1:n2 ;
printf("Maximum of the Two is : %d\n",lar);
}
