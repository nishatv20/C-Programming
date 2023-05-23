#include<stdio.h>
main() {
for(int i =1; i<=30; i++) {
    for(int j=i; j<=30; j++) {
        for(int k=j; k<=30; k++) {
            if(i*i + j*j == k*k || i*i + k*k == j*j || j*j + k*k == i*i) {
                printf("\nPythagorean Triples are : %d  %d  %d", i, j, k );
            }
        }
    }
}
}
