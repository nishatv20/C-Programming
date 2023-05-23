#include<stdio.h>
int main() {
char ch ='N';
/* GENERIC POINTER*/
void *p = &ch;
/*TYPE CASTING*/
printf("%c", *(char  *)p);
return 0;
}
