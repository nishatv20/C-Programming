#include<stdio.h>
int isEqual(char s1[],char s2[]) {
int i;
for(i=0; s1[i]!='\0'; i++) {
    if(s2[i]==s1[i]) {
        return 0;
    }
    else {return 1;}
}
}
int main() {
int res;
char str1[100];
printf("Enter String 1:");
gets(str1);
char str2[100];
printf("Enter String 2:");
gets(str2);
printf("\n-----------------------------------------------\n");
res = isEqual(str1,str2);
printf("\n-----------------------------------------------\n");
if(res==0) {
    printf("STRINGS ARE EQUAL");
}
if(res==1) {
    printf("STRINGS ARE NOT EQUAL");
}
return 0;
}
