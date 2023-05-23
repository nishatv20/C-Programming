#include<stdio.h>
main() {
int num, sum=0;
printf("Enter a Number : \n");
scanf("%d",&num);

for(int i=1; i<=num; i++) {
     if(i%2 ==0) {
        sum = sum + i;
     }

}
printf("\nSum of Even Numbers is : %d",sum);
}
