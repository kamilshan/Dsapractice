#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define MAX 100
int queue[MAX];
int front = -1;
int rear = -1;
void enqueue(int value) {
    if(rear==MAX-1) {
        printf("queue is full\n"):
    } else {
        if(front==-1) {
            front=0;    
        }
        rear=rear+1;                

        queue[rear] = value;
    }
}
void dequeue() {

if(front==-1 || front>rear) {
       printf("UNDERFLOW\n");
} else{
    int value=queue[front];
     front=front+1;
     printf("dequeued element is %d\n",value);
}
       

}
void display() {
    if(front==-1) {
        printf("queue is empty\n");
    } else {
        printf("queue elements are: ");
        for(int i=front; i<=rear; i++) {
            printf("%d ", queue[i]);
        }
        printf("\n");
    }
}
  void isEmpty() {
    if(front==-1||front>rear)
    { printf("yes queue is empty\n");
    }else {
        printf("no queue is not empty\n");

    }}

    void isFull() {
        if(rear==MAX-1) {
            printf("yes queue is full\n");
        } else {
            printf("no queue is not full\n");
        }
    }
    int size() {
        if(front==-1) {
            return 0;
        } else
         return rear-front+1;
    }
    int main() {
        int choice,value;
        
    }
  
