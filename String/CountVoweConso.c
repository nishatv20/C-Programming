#include<stdio.h>
void countVoweConso(char str []) {
    int vowel=0;
    int consonant=0;
    for(int i=0; str[i]!='\0'; i++) {
       if(str[i]=='a' || str[i]=='e' || str[i]=='i' || str[i]=='o' || str[i]=='u' ||
           str[i] == 'A' || str[i] == 'E' || str[i] == 'I' || str[i] == 'O' || str[i] == 'U')  {
            vowel++;
           }
           else {
            consonant++;
           }
    }
    printf("NUMBER OF CONSONANTS ARE : %d\n",consonant);
    printf("NUMBER OF VOWELS ARE : %d\n",vowel);
}
int main() {
    char str[50];
    printf("ENTER A STRING : \n");
    gets(str);
    printf("\n++++++++++++++++++++++++++++++++++++++++++++\n");
    countVoweConso(str);
return 0;
}
