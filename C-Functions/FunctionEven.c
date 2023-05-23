#include<stdio.h>
void getEven() {
int x= 1;
while(x<=100) {
if(x%2==0) {
printf("%d \n",x);
}
x++;
}
}
int main() {
getEven();
return 0;
}
