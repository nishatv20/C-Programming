#include<stdio.h>
void printString(char s[]){
int i;
for(i=0; s[i]!='\0'; i++) {
    printf("%c",s[i]);
}
}
void concatString(char s1[], char s2[]) {
int i,j,k=0;
char s[100];
for(i=0; s1[i]!='\0'; i++) {
    s[i] = s1[i];
    k++;
}

for(j=0,k; s2[j]!='\0'; j++) {
    s[k]= s2[j];
    k++;
}
s[k]='\0';
int z;
for(z=0; s[z]!='\0'; z++){
    printf("%c",s[z]);
}
}
int main() {
char s1[100];
char s2[100];
printf("Enter String 1:");
gets(s1);
printf("Enter String 2 :");
gets(s2);
printf("\n--------------------------------------------------\n");
printString(s1);
printf("\n--------------------------------------------------\n");
printString(s2);
printf("\n--------------------------------------------------\n");
concatString(s1,s2);
return 0;
}
