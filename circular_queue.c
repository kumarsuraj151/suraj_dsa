#include<stdio.h>
#include<stdlib.h>
 
struct circularQueue
{
    int size;
    int f;
    int r;
    int* arr;
};
void enqueue(struct circularQueue *q, int val){
    if((q->r+1)%q->size==q->f){
        printf("This Queue is full");
    }
    if(q->f==-1){
        q->f=0;
    }
    
    q->r=(q->r+1)%q->size;
    q->arr[q->r]=val;
}
 
int dequeue(struct circularQueue *q){
    if(q->f==-1){
        printf("This Queue is empty");
    }
    int result =q->arr[q->f];
    if(q->f==q->r){
        q->f=-1;
        q->r=-1;
    }
    else{
        q->f=(q->f+1)%q->size;
    }
    return result;
}
 
 
int main(){
    struct circularQueue q;
    q.size = 4;
    q.f = q.r = -1;
    q.arr = (int*) malloc(q.size*sizeof(int));
    
    // Enqueue few elements
    enqueue(&q, 12);
    enqueue(&q, 15);
    enqueue(&q, 1); 
    enqueue(&q, 1); 
    dequeue(&q);
    dequeue(&q);
    dequeue(&q);
    dequeue(&q);
    dequeue(&q);
    
    
    return 0;
}
