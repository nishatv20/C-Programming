#include<stdio.h>
int main() {
char name[100] ={'N','I','S','H','A','T','\0'};
int j=0;
while(name[j]!='\0'){
    printf("%c",name[j]);
    j++;
}
return 0;
}
