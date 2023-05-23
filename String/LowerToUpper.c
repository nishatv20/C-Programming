#include<stdio.h>
void lowerUpper(char str []) {
for(int i=0; str[i]!='\0'; i++) {
    if(str[i]>= 'a' && str[i]<= 'z') {
        str[i] = str[i] - 32;
    }
}
printf("UPPERCASE STRING : %s",str);
}
int main() {
    char str[50];
    printf("ENTER STRING :\n");
    gets(str);
    printf("\n+++++++++++++++++++++++\n");
    lowerUpper(str);
return 0;
}
