#include<stdio.h>
#include<stdlib.h>

struct node {
int data;
struct node *next;
};

void printList(struct node *head){
    while(head!=NULL) {
        printf(" %d ",head->data);
        head = head->next;
    }
}

int main() {
    struct node *s1 = (struct node*)malloc(1*sizeof(struct node));
    struct node *s2 = (struct node*)malloc(1*sizeof(struct node));
    struct node *s3 = (struct node*)malloc(1*sizeof(struct node));
    struct node *s4 = (struct node*)malloc(1*sizeof(struct node));

    s1->data = 11;
    s2->data = 22;
    s3->data = 33;
    s4->data = 44;

    s1->next = s2;
    s2->next = s3;
    s3->next = s4;
    s4->next = NULL;

    struct node *head = s1;
    printList(head);
    printf("\n+++++++++++++++++++++++++++++++++++++++++++++++++++\n");

    printf("ELEMENT INSERTION AT BEGINING\n");
    struct node *newNode = (struct node*)malloc(1*sizeof(struct node));
    newNode->data = 55;
    newNode->next = head;
    head = newNode;

    printList(head);
    printf("\n+++++++++++++++++++++++++++++++++++++++++++++++++++\n");




}
