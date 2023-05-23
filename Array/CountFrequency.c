#include<stdio.h>
int main() {
int num;
printf("ENTER A NUMBER :\n");
scanf("%d",&num);
int freq[10];
int lastDigit,i,n;

for(i=0; i<10; i++) {
    freq[i] = 0;
}
n= num;
while(n!=0) {
    lastDigit = n%10;
    freq[lastDigit]++;
    n=n/10;
}
printf("FREQUENCY OF EACH DIGIT IN %d : \n",num);
for(i=0; i<10; i++) {
    printf("FREQUENCY OF %d is : %d\n",i,freq[i]);
}
return 0;
}
