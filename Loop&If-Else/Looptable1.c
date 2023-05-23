#include<stdio.h>
main() {
int num, i=1;
int res;
printf("Enter The Number: \n");
scanf("%d",&num);

while(i<=10) {
    res = num*i ;
    printf("%d * %d = %d \n",num,i,num*i);

    i = i+1;
}

}
