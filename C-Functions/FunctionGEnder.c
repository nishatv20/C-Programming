#include<stdio.h>
void getGender(char x) {
if(x=='m' || x=='M') {
    printf("MALE");
}

else if(x=='f' || x=="F") {
    printf("FEMALE");
}
else {
    printf("OTHERS");
}
}
int main() {
char ch;
printf("Enter Character : \n");
scanf("%c",&ch);
getGender(ch);
return 0;
}
