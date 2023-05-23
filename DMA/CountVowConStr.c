#include<stdio.h>
#include<stdlib.h>
int main() {
    int vowel=0;
    int conso=0;
    int n;
    char*p;
    printf("ENTER SIZE OF STRING:\n");
    scanf("%d",&n);

    p = (char*)malloc(n*sizeof(char));
    printf("ENTER A STRING :\n");
    scanf(" ");
    gets(p);

    for(int i=0; p[i]!='\0'; i++) {

        if(p[i]=='a'|| p[i]=='e' || p[i]=='i' || p[i]=='o' || p[i]=='u' ||
           p[i]=='A' || p[i]=='E' || p[i]=='I' || p[i]=='O' || p[i]=='U') {
            vowel++;
           }

           else {
            conso++;
           }
    }
    printf("VOWEL = %d    CONSONANTS = %d \n",vowel,conso);
    free(p);
    return 0;
}
