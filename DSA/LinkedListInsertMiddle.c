#include<stdio.h>
struct node{
int data;
struct node *next;
};

void printList(struct node *head) {
while(head!=NULL) {
    printf(" %d ",head->data);
    head = head->next;
}
}
int main() {
    struct node*s1 = (struct node*)malloc(1*sizeof(struct node));
    struct node*s2 = (struct node*)malloc(1*sizeof(struct node));
    struct node*s3 = (struct node*)malloc(1*sizeof(struct node));
    struct node*s4 = (struct node*)malloc(1*sizeof(struct node));

    s1->data= 11;
    s2->data= 22;
    s3->data= 33;
    s4->data= 44;

    s1->next = s2;
    s2->next = s3;
    s3->next = s4;
    s4->next = NULL;

    struct node *head = s1;
    printList(head);
    printf("\n+++++++++++++++++++++++++++++++++++++++++++++++++\n");

    printf("INSERT ELEMENT IN MIDDLE\n");
    struct node *newNode = (struct node*)malloc(1*sizeof(struct node));
    newNode->data = 99;

    int position = 3;
    struct node *temp = head;
    for(int i=2; i<position; i++) {
        if(temp->next!=NULL) {
            temp = temp->next;
        }
    }

    newNode->next = temp->next;
    temp->next = newNode;

    printList(head);
    printf("\n+++++++++++++++++++++++++++++++++++++++++++++++++\n");
 return 0;
}
