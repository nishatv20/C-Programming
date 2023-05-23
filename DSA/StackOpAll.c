#include<stdio.h>
struct stack {
int A[5];
int top;
};

void push(int ele,struct stack *s1) {
if(s1->top<4) {
        s1->top = s1->top+1;
    s1->A[s1->top] = ele;
}
else {
    printf("Stack is Full:\n");
}
}

void displayStack(struct stack *s1) {
for(int i=0; i<=s1->top; i++) {
    printf("%d ",s1->A[i]);
}
}

void pop(struct stack *s1) {
if(s1->top==-1){
    printf("Stack is Empty");
}
else {
    int ele = s1->A[s1->top];
    printf("Popped Element is :%d\n",ele);
    s1->top = s1->top-1;
}

}

int peek(struct stack *s1) {
if(s1->top == -1) {
    printf("Stack is Empty");
}
else {
    return s1->A[s1->top];
}
}

int search(int ele,struct stack *s1) {

for(int i=0; i<=s1->top; i++) {
        printf(" **  %d  ** %d\n",s1->top, s1->A[i]);
    if(s1->A[i]==ele) {
        return 1;
    }
}

return 0;
}

void isEmpty(struct stack *s1) {
if(s1->top==-1) {
    printf("Stack is Empty");
}
else{
    printf("Stack is not Empty");
}
}

int main() {
    struct stack s1;
    s1.top = -1;

    push(11,&s1);               //PUSH
    push(12,&s1);
    push(13,&s1);
    push(14,&s1);
    push(15,&s1);
    printf("\n+++++++++++++++++++++++++++++++++++++++++++++\n");
    displayStack(&s1);
    printf("\n+++++++++++++++++++++++++++++++++++++++++++++\n");


    pop(&s1);                   //POP
    displayStack(&s1);
    printf("\n+++++++++++++++++++++++++++++++++++++++++++++\n");

    int res = peek(&s1);        //PEEK
    printf("TOP ELEMENT OF STACK IS : %d\n",res);
    printf("\n+++++++++++++++++++++++++++++++++++++++++++++\n");

    int found = search(13,&s1);
    if(found == 1) {              //SEARCH
        printf("ELEMENT IS PRESENT\n");
    }
    else
        printf("ELEMENT IS NOT FOUND\n");

    printf("\n+++++++++++++++++++++++++++++++++++++++++++++\n");


    isEmpty(&s1);               //IS EMPTY
    printf("\n+++++++++++++++++++++++++++++++++++++++++++++\n");
return 0;
}
