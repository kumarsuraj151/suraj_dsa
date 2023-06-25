#include <bits/stdc++.h> 
class Queue {
    int *arr;
    int size;
    int qfront;
    int rear;
public:
    Queue() {
        // Implement the Constructor
        size=1000001;
        arr=new int[size];
        qfront=0;
        rear=0;
    }

    /*----------------- Public Functions of Queue -----------------*/

    bool isEmpty() {
        // Implement the isEmpty() function
        if(qfront == rear){
            return true;
        }
        else return false;
    }

    void enqueue(int data) {
        // Implement the enqueue() function
        if(rear==size){
        }
        else{
            arr[rear]=data;
            rear++;
        }
    }

    int dequeue() {
        // Implement the dequeue() function
        if(qfront ==rear){
            return -1;
        }
        else{
            int ans=arr[qfront];
            qfront++;
            return ans;
        }
    }

    int front() {
        // Implement the front() function
        if(qfront==rear) return -1;
        else{
            return arr[qfront];
        }
    }
};
