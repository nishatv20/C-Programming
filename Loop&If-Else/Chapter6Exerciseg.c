#include<stdio.h>
#include<Math.h>
 main() {
float a,d;
int p,r,n,q;
for(int i=1; i<=10; i++) {

    printf("\nEnter Principal : \n");
scanf("%d",&p);

printf("Enter Annual rate : \n");
scanf("%d",&r);

printf("Enter years : \n");
scanf("%d",&n);

printf("Enter Times per Year : \n");
scanf("%d",&q);

d = pow((1+r/q), n*q);
a=p*d ;
printf("Amount is : %d", a);
}



 }
