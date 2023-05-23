#include<stdio.h>
void getFact(int x) {
    int fact=1;
    for(int i=x; i!=0; i--) {
        fact = fact *i;
    }
    printf("FACTORIAL IS : %d", fact);
}
int main() {
int num;
printf("Enter a Number :");
scanf("%d",&num);
getFact(num);
return 0;
}
