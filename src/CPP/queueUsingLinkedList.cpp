// Code written by Sachin Shah 
// Let's connect on GitHub - @imsachinshah
// Twitter - "@imsachinshah0"


#include <iostream>
using namespace std;

struct Node *f = NULL;
struct Node *r = NULL;

struct Node
{
    int data;
    struct Node *next;
};

void traverseList(struct Node *ptr)
{
    cout << "Printing the elements of Queue\n";

    while (ptr != NULL)
    {
        cout << "Element is: " << ptr->data << endl;
        ptr = ptr->next;
    }
}

void enqueue(int val)
{

    Node *n = new Node();

    if (n == NULL)
    {
        cout << "Queue is Full\n";
    }
    else
    {
        n->next = NULL;
        n->data = val;

        if (f == NULL)
        {
            f = r = n;
        }
        else
        {
            r->next = n;
            r = n;
        }
    }
}

int dequeue()
{
    int val = -1;
    Node *ptr = f;

    if (f == NULL)
    {
        cout << "Queue is Empty\n";
    }
    else
    {
        f = f->next;
        val = ptr->data;
        free(ptr);
    }
    return val;
}

int main()
{

    enqueue(3);
    enqueue(53);
    enqueue(39);

    traverseList(f);

    cout << "The element dequeued: " << dequeue() << endl;
    cout << "The element dequeued: " << dequeue() << endl;
    cout << "The element dequeued: " << dequeue() << endl;

    enqueue(5);
    enqueue(6);

    traverseList(f);

    cout << "The element dequeued: " << dequeue() << endl;

    return 0;
}