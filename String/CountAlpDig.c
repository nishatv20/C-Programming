#include<stdio.h>
void countAlpDig(char str[]){
    int alphabets=0;
    int digits=0;
    int spl=0;
for(int i=0; str[i]!='\0'; i++) {

    if((str[i]>='a' && str[i]<='z') || (str[i]>='A' && str[i]<='Z')) {
        alphabets++;
    }
    else if ( str[i] >='0' && str[i]<='9') {
        digits++;
    }
    else {
        spl++;
    }
}
printf("ALPHABETS = %d\n",alphabets);
printf("DIGITS = %d\n",digits);
printf("SPECIAL CHARACTER = %d\n",spl);
}
int main() {
    char str[50];
    printf("ENTER A STRING : \n");
    gets(str);
    printf("\n++++++++++++++++++++++++++++++++++++++++++++\n");
    countAlpDig(str);
return 0;
}
