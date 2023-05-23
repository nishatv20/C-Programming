#include<stdio.h>
struct queue {
int A[5];
int front;
int rear;
};

void queue(struct queue *q, int ele) {
if(q->rear==4) {
    printf("QUEUE IS FULL \n");
}

else {
    if(q->front==-1){
        q->front=0;
    }
    q->rear = q->rear+1;
    q->A[q->rear] = ele;
}
}

void deque(struct queue *q) {
if (q->front ==-1){
    printf("QUEUE IS EMPTY \n");
}
else {
    printf("DELETED ELEMENT IS : %d \n",q->A[q->front]);
}
 q->front = q->front+1;

if(q->front > q->rear) {
    q->front = q->rear = -1;
}
}


void displayQueue(struct queue *q) {
for(int i=q->front; i<= q->rear; i++) {
    printf("%d\n",q->A[i]);
}
}

int main() {
struct queue q;
q.front = -1;
q.rear = -1;
printf("\n+++++++++++++++++++++++++++++++++++++++++++++++++++\n");

queue(&q,11);
queue(&q,22);                              //QUEUE
queue(&q,33);
queue(&q,44);
queue(&q,55);
displayQueue(&q);
printf("\n+++++++++++++++++++++++++++++++++++++++++++++++++++\n");

deque(&q);
displayQueue(&q);                         //DEQUE
printf("\n+++++++++++++++++++++++++++++++++++++++++++++++++++\n");

deque(&q);
displayQueue(&q);                         //DEQUE
printf("\n+++++++++++++++++++++++++++++++++++++++++++++++++++\n");
return 0;
}
