#include<stdio.h>
void isAlpha(char x) {
(x>='a' && x<='z')? printf("%c is Alphabet in Small Case",x):(x>='A' && x<='Z') ? printf("%c is Alphabet in Capital",x): printf("Not an Alphabet");
}
int main() {
    char ch;
    printf("Enter a character :");
    scanf("%c",&ch);
    isAlpha(ch);
    return 0;
}
