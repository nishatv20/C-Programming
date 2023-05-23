#include<stdio.h>
int main() {
    int n = 11;
    /* GENERIC POINTER */
    void *p = &n;

    /*TYPE CASTING */
    printf("%d", *(int *)p);
return 0;
}
