#include<stdio.h>
void printArray(char arr[]) {
for(int i=0; arr[i]!='\0'; i++) {
    printf("%c",arr[i]);
}
}

int getCount(char arr[]) {
int i,count=0;
for(i=0; arr[i]!='\0'; i++) {
    count++;
}
return count;
}

int main() {
char input[100];
int count;
printf("Enter Name : \n");
gets(input);
printf("\n-----------------------------------------------------------\n");
printArray(input);
printf("\n-----------------------------------------------------------\n");
count = getCount(input);
printf("NUMBER OF CHARACTERS ARE : %d",count);
printf("\n-----------------------------------------------------------\n");
return 0;
}
