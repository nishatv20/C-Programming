#include<stdio.h>
int main() {
    float f =10.21;
    void *p = &f;
    printf("%.2f", *(float *)p);
return 0;
}
