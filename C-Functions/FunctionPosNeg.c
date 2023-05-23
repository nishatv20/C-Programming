#include <stdio.h>
int isPosNeg(int x) {
    if(x>0) {
        return 1;
    }
    else {
       return 0;
    }
}
int main() {
    int num;
    printf("Enter a Number : \n");
    scanf("%d",&num);
    int res = isPosNeg(num);

    if(res ==1)
        printf("POSITIVE NUMBER %d", num);

    else printf("NEGATIVE NUMBER %d", num);
return 0;
}
