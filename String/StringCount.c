#include<stdio.h>
void printArray(char arr[]) {
int i;
for(i=0; arr[i]!='\0'; i++) {
    printf("%c", arr[i]);
}
}

int getCount(char arr[]) {
int i,count=0;
for(i=0; arr[i]!='\0'; i++){
    count++;
}
return count;
}

int main() {
    char name[100];
    int count;
    printf("Enter Name :");
    gets(name);
    printf("\n-----------------------------------------------\n");
    printArray(name);
    printf("\n-----------------------------------------------\n");
    count =getCount(name);
    printf("COUNT IS : %d", count);
return 0;
}
