#include<stdio.h>
void isAngstr(int x) {
    int cube,sum=0;

for(int num=x; num!=0; num=num/10) {
    int rem = num%10;
    cube = rem*rem*rem;
    sum = sum+cube ;
}
if(x==sum) {
    printf("ANGSTRONG NUMBER");
}
else {
    printf("NOT4 ANGSTRONG NUMBER");
}
}
int main() {
int num;
printf("Enter a Number :");
scanf("%d",&num);
isAngstr(num);
return 0;
}
