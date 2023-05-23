#include<stdio.h>
#include<stdlib.h>

struct coach{
int capacity;
struct coach *link;
};

void printList(struct coach *head){
while(head!=NULL)
    {

        printf(" %d ",head->capacity);
        head = head->link;
    }
}
int main() {
    struct coach *s1 = (struct coach*)malloc(1*sizeof(struct coach));
    struct coach *s2 = (struct coach*)malloc(1*sizeof(struct coach));
    struct coach *s3 = (struct coach*)malloc(1*sizeof(struct coach));
    struct coach *s4 = (struct coach*)malloc(1*sizeof(struct coach));

    s1->capacity=80;
    s2->capacity=55;
    s3->capacity=77;
    s4->capacity=99;

    s1->link=s2;
    s2->link=s3;
    s3->link=s4;
    s4->link=NULL;

    struct coach *head =s1;

    printList(head);
free(s1);
free(s2);
free(s3);
free(s4);
return 0;
}
