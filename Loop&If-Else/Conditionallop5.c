#include<stdio.h>
main() {
char ch;
printf("Enter a Character : \n");
scanf("%c",&ch);

(ch>='a' && ch<='z')? printf("Character is Alphabet in small-case..."):
    (ch>='A' && ch<='Z')?printf("Character is Alphabet in Capital"):printf("Not an Alphabet");

}
