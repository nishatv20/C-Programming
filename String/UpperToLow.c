#include<stdio.h>
void UpperToLow(char str []) {
for(int i=0; str[i]!=0; i++) {
    if(str[i]>= 'A' && str[i]<= 'Z') {
        str[i] = str[i] + 32;
    }
}
printf("LOWERCASE STRING : %s",str);
}
int main() {
    char str[50];
    printf("ENTER STRING :\n");
    gets(str);
    printf("\n+++++++++++++++++++++++++++\n");
    UpperToLow(str);
return 0;
}
