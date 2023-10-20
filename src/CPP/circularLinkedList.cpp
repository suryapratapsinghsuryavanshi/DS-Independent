// Code contributed by Sachin Shah 
// Let's connect on GitHub - @imsachinshah
// Twitter - "@imsachinshah0"

#include <iostream>
using namespace std;

struct Node
{
    int data;
    struct Node *next;
};

// Insertion at Begin in Circular Linked List

struct Node *insertCircularLLAtBegin(struct Node *head, int data)
{
    struct Node *p = new Node();
    struct Node *q;

    p->data = data;
    q = head->next;

    do
    {
        q = q->next;

    } while (q->next != head);

    p->next = head;
    head = p;
    q->next = head;

    return head;
}

void traverseCircularLL(struct Node *head)
{
    struct Node *ptr = head;
    do
    {
        cout << "Element is: " << ptr->data << endl;
        ptr = ptr->next;
    } while (ptr->next != head);

    cout << "Element is: " << ptr->data << endl;
}

int main()
{

    Node *head = new Node();
    Node *second = new Node();
    Node *third = new Node();
    Node *fourth = new Node();

    head->data = 2;
    head->next = second;

    second->data = 72;
    second->next = third;

    third->data = 92;
    third->next = fourth;

    fourth->data = 99;
    fourth->next = head;

    cout << "Before Insertion: \n";

    traverseCircularLL(head);

    head = insertCircularLLAtBegin(head, 90);

    // head = deleteAtIndex(head, 2);

    // head = deleteAtEnd(head);

    // head = deleteAfterNode(head, second);

    cout << "\nAfter Insertion: \n";

    traverseCircularLL(head);

    return 0;
}
