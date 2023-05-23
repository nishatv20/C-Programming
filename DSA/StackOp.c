#include<stdio.h>
struct stack {
int A[5];
int top;
};

void push(int ele, struct stack *s1) {
if (s1->top <4) {

    s1->top = s1->top+1;
    s1->A[s1->top] = ele ;
}

else {
    printf("Stack is Full !!!\n");
}
}

void displayStack(struct stack *s1) {
for(int i =0; i<= s1->top; i++) {
    printf("i: %d top : %d %d\n",i,s1->top,s1->A[i]);
}
}

int main() {
    struct stack s1;
    s1.top = -1;

    push(11,&s1);
    displayStack(&s1);
    printf("\n+++++++++++++++++++++++++++++++++++++++++++++++++++++++\n");

    push(22,&s1);
    displayStack(&s1);
    printf("\n+++++++++++++++++++++++++++++++++++++++++++++++++++++++\n");

    push(33,&s1);
    displayStack(&s1);
    printf("\n+++++++++++++++++++++++++++++++++++++++++++++++++++++++\n");

    push(44,&s1);
    displayStack(&s1);
    printf("\n+++++++++++++++++++++++++++++++++++++++++++++++++++++++\n");

    push(55,&s1);
    displayStack(&s1);
    printf("\n+++++++++++++++++++++++++++++++++++++++++++++++++++++++\n");

    push(66,&s1);
    displayStack(&s1);
   printf("\n+++++++++++++++++++++++++++++++++++++++++++++++++++++++\n");
return 0;
}
