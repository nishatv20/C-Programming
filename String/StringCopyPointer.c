#include<stdio.h>
void printString(char ch[]) {
int i;
for(i=0; ch[i]!='\0'; i++){
    printf("%c",ch[i]);
}
}

void copyString(char ch[]) {

char ch1[100];
int i;
for(i=0; ch[i]!='\0'; i++) {
    ch1[i]=ch[i];
}
 ch1[i]='\0';

int j;
printf("COPIED STRING IS :");
for(j=0;ch1[j]!='\0'; j++){
    printf("%c",ch1[j]);
}

}

int main() {
char s[100];

printf("Enter String:");
gets(s);

printf("\n---------------------------------------------------------\n");
printString(s);
printf("\n---------------------------------------------------------\n");
copyString(s);
printf("\-----------------------------------------------------------\n");
return 0;
}
