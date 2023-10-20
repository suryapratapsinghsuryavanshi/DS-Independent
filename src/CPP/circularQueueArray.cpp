// Code contributed by Sachin Shah 
// Let's connect on GitHub - @imsachinshah
// Twitter - "@imsachinshah0"

#include <iostream>
#include<cstdlib>
#include<typeinfo>
using namespace std;

struct CircularQueue{
    int size;
    int f;
    int r;
    int *arr;

};

int isEmpty(struct CircularQueue *q){

    if(q->f == q->r)
        return 1;
    return 0;
}

int isFull(struct CircularQueue *q){

    if(((q->r + 1) % q->size) == q->f)
        return 1;
    return 0;
}

void enQueue(struct CircularQueue *q, int val){

    if(isFull(q))
        cout<< "Queue is Full, Can't Enqueue"<< endl;
    else{
        q->r = (q->r + 1) % q->size;
        q->arr[q->r]= val;

        cout << q->arr[q->r] << " Enqueed.\n";
    }
}

int deQueue(struct CircularQueue *q){

    int a = -1;

    if(isEmpty(q))
        return 0;
    else{
        q->f = (q->f + 1) % q->size;
        a = q->arr[q->f];
    }
    return a;

}

int main(){

    CircularQueue *q = new CircularQueue();

    q->size = 4;
    q->f = 0;
    q->r = 0;
    q->arr = new int();

    enQueue(q, 10);
    enQueue(q, 1);
    enQueue(q, 12);
    enQueue(q, 14);

    cout<< "The value dequeued is: "<< deQueue(q) << endl;

    enQueue(q, 15);

    return 0;
}