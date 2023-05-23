#include<stdio.h>
void swap(char *x, char *y) {
char temp = *x;
*x = *y;
*y = temp;
}
int main() {
char ch1 ='N';
char ch2 = 'V';
swap(&ch1, &ch2);
printf("CH1 : %c  and CH2 : %c", ch1,ch2);
return 0;
}
