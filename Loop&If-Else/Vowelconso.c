#include<stdio.h>
main() {
    char ch;
    printf("Enter an Alphabet : \n");
    scanf("%c", &ch);

    if(ch=='a' || ch=='e' || ch=='i' || ch=='o' || ch=='u') {
        printf("The Alphabet is vowel..");
    }

    else if(ch=='A' || ch=='E' || ch=='I' || ch=='O' || ch=='U') {
        printf("The Alphabet is vowel..");
    }

    else {
        printf("The Alphabet is Consonant..");
    }
}
