#include<stdio.h>
void printString(char ch[]) {
int i;
for(i=0;ch[i]!='\0'; i++) {
    printf("%c",ch[i]);
}
}

void getReverse(char ch[]) {
int i,len,count=0;
for(i=0; ch[i]!=0; i++) {
    count++;
}
len=count-1;
printf("String in REVERSE :");
for(i=len; i>=0; i--) {
    printf("%c",ch[i]);
}
ch[i]='\0';
}

int main() {
char str[100];
printf("Enter String : ");
gets(str);
printf("\n-----------------------------------------------\n");
printString(str);
printf("\n-----------------------------------------------\n");
getReverse(str);
printf("\n-----------------------------------------------\n");
return 0;

}
