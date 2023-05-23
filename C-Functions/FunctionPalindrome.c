#include<stdio.h>
void getPalind(int x) {
int y =x;
int rem,rev =0;
while(y!=0) {
     rem = y%10;
    rev = rev*10 + rem;
    y =y/10;
}
printf("NUMBER IN REVERSE : %d\n", rev);
if(rev==x)
    printf("PALINDROME");

else
    printf("NOT PALINDROME");

}
int main() {
int num;
printf("Enter a Number : ");
scanf("%d", &num);
getPalind(num);
return 0;
}
