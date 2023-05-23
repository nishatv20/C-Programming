#include<stdio.h>
void isStrong(int x){
    int rem,sum=0;
for(int i=x; i!=0; i=i/10) {
    int fact=1;
    rem= i%10;
    for(int temp =rem; temp!=0; temp--) {
         fact = fact*temp;
    }
    sum = sum + fact;
}
if(sum==x) {
    printf("STRONG NUMBER");
}
else {
    printf("NOT A STRONG NUMBER");
}
}
int main(){
int num;
printf("Enter a Number :");
scanf("%d",&num);
isStrong(num);
return 0;
}
