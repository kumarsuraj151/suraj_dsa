
#include <stdio.h>
#include <stdlib.h>


struct Node {
    int data;
    struct Node* link;
};

struct Node* top = NULL;

void Push(int x) {
    struct Node* temp = (struct Node*)malloc(sizeof( struct Node*));
    temp->data = x;
    temp->link = top;
    top = temp;
}

void Pop(){
    struct Node *temp;
    if(top == NULL) return;
    temp = top;
    top = top->link;
    free(temp);
}

int isEmpty(){
    if(top == NULL)
        return 1;
    else
        return 0;
}

int Top(){
    return top->data;
}

int Print(){
    struct Node* temp = top;
    if(isEmpty() == 1){
        printf("Stack is Empty");
       
    }
    else{
    while(temp != NULL){
        printf("%d \n",temp->data);
        temp = temp->link;
    }
    printf("\n");
    }
}

int main()
{
Push(56);
Push(6);
Push(5);
Print();
Pop();
Print();
  return 0;
}