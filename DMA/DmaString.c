#include<stdio.h>
int main() {
int n;
printf("Enter Size of String \n");
scanf("%d",&n);

char *p = (char *)malloc(n*sizeof(char));

for(int i=0; i<n; i++) {
    printf("Enter \n");
    scanf
}



for(int i=0; i<n; i++) {
    printf("%c",p[i]);
}

free(p);
return 0;
}
