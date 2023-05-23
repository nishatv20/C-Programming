#include<stdio.h>
main() {
int x;
do{
printf("Enter 1 For RAT :\n");
printf("Enter 2 For Mirror RAT :\n");
printf("Enter 3 For Hollow RAT :\n");
printf("Enter 4 For Hollow Mirror RAT :\n");

int op;
printf("----SELECT YOUR CHOICE----\n");
scanf("%d",&op);

switch(op) {

case 1: for(int i=1; i<=5; i++) {
    for(int j=1; j<=i; j++) {
        printf("*");
    }
printf("\n");
}
break;

case 2: for(int i=1; i<=5; i++) {
    for(int k=5; k>=i; k--) {
        printf(" ");
    }

    for(int j=1; j<=i; j++) {
        printf("*");
    }
printf("\n");
}
break;

case 3: for(int i=1; i<=5; i++) {
    for(int j=1; j<=i; j++) {
        if(i==j || i==5 || j==1) {
            printf("*");
        }
        else{
            printf(" ");
        }
    }
printf("\n");
}
break;

case 4: for(int i=1; i<=5; i++) {
    for(int k =5; k>=i; k--) {
        printf(" ");
    }
    for(int j=1; j<=i; j++) {
        if(i==j || i==5 ||j==1) {
            printf("*");
        }
        else{
            printf(" ");
        }
    }
     printf("\n");
}
break;

default: printf("----Not a Valid INPUT----");
}

printf("---PRESS 1 TO CONTINUE---\n");
scanf("%d",&x);
}
while(x==1);
}
