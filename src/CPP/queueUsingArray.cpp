// Code written by Sachin Shah 
// Let's connect on GitHub - @imsachinshah
// Twitter - "@imsachinshah0"



#include <iostream>
#include<cstdlib>
#include<typeinfo>
using namespace std;

struct Queue{
    int size;
    int f;
    int r;
    int *arr;

};

int isEmpty(struct Queue *q){

    if(q->f == q->r)
        return 1;
    return 0;
}

int isFull(struct Queue *q){

    if(q->r == q->size - 1)
        return 1;
    return 0;
}

void enQueue(struct Queue *q, int val){

    if(isFull(q))
        cout<< "Queue is Full, Can't Enqueue"<< endl;
    else{
        q->r = q->r + 1;
        q->arr[q->r]= val;

        cout << q->arr[q->r] << " enqueed.\n";
    }
}

int deQueue(struct Queue *q){

    int a = -1;

    if(isEmpty(q))
        return 0;
    else{
        q->f++;
        a = q->arr[q->f];
    }
    return a;

}

int main(){

    Queue *q = new Queue();

    q->size = 4;
    q->f = -1;
    q->r = -1;
    q->arr = new int();

    enQueue(q, 10);
    enQueue(q, 1);
    enQueue(q, 12);
    enQueue(q, 12);


    cout<< "The value dequeued is: "<< deQueue(q);

    enQueue(q, 12);


    return 0;
}