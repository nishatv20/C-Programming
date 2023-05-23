#include<stdio.h>
int compareString(char str1[], char str2[]) {
int i,int res;
for(i=0; str1[i]!='\0' ||str2[i]!='\0'; i++) {
     if(str1[i]!=str2[i]) {
        res = str1[i] -str2[i];
    }
}
  return res;
}
int main() {
    int res;
    char str1[100];
    char str2[100];
    printf("ENTER STRING 1 :");
    gets(str1);
    printf("Enter STRING 2 :");
    gets(str2);
    printf("\n-----------------------------------------------\n");
    res = compareString(str1,str2);
    if(res==0) {
        printf("STRINGS ARE EQUAL");
    }
    else if(res<0) {
        printf("STRING 2 is GREATER");
    }
    else {
        printf("STRING 1 IS GREATER");
    }
    return 0;
}
