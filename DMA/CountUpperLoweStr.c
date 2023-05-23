#include<stdio.h>
#include<stdio.h>
int main() {
int n,up=0,lc=0,dig=0,spl=0,i;
char*p;
p = (char*)malloc(n*sizeof(char));

printf("ENTER SIZE OF STRING:\n");
scanf("%d",&n);

printf("ENTER A STRING :\n");
scanf(" ");
gets(p);

for(i=0; p[i]!='\0'; i++) {
    if(p[i]>='a' && p[i]<='z') {
        lc++;
    }

    else if(p[i]>='A' && p[i]<='Z') {
        up++;
    }

    else if(p[i]>='0' && p[i]<='9') {
        dig++;
    }

    else {
        spl++;
    }
}
printf("LOWER CASE :%d\n",lc);
printf("UPPER CASE :%d\n",up);
printf("DIGITS :%d\n",dig);
printf("SPECIAL CHARACTER :%d\n",spl);

free(p);
return 0;
}
