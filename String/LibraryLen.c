#include<stdio.h>
int main(){
char str[100] ="Nishat";
int len1,len2;
len1 = strlen(str);
len2 = strlen("Humpty Dumpty");
printf("String = %s Length = %d \n",str,len1);
printf("String = %s Length = %d \n","Humpty Dumpty",len2);
return 0;
}
