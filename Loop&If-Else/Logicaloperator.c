#include<stdio.h>
main() {
char letter;
printf("Enter a letter : \n");
scanf("%c", &letter);

if(letter >= 'a' && letter<= 'z') {
    printf("This is an alphabet small case...");
}

else if(letter >= 'A' && letter <= 'Z') {
    printf("This is an alphabet in Capital...");
}

else if (letter >= '0' && letter <= '9') {
    printf("The letter is a number");
}

else {
    printf("The letter is a Symbol");
}
}
