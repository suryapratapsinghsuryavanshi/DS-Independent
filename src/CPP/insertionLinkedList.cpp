
// Code written by Sachin Shah 
// Let's connect on GitHub - @imsachinshah
// Twitter - "@imsachinshah0"


#include <iostream>
using namespace std;

// Creating Node of Linked List
struct Node
{
    int data;
    struct Node *next;
};

// Insertion at Beginning
struct Node* insertAtBegin(struct Node *head, int data)
{

    Node *ptr = new Node();
    ptr->data = data;

    ptr->next = head;

    return ptr;
}

// Insertion in Between
struct Node* insertAtIndex(struct Node *head, int data, int index)
{

    Node *ptr = new Node();
    ptr->data = data;
    int i = 0;

    struct Node *p = head;

    while (i != index - 1)
    {
        p = p->next;
        i++;
    }

    ptr->next = p->next;
    p->next = ptr;

    return head;
}

// Insertion at End
struct Node* insertAtEnd(struct Node *head, int data)
{

    Node *ptr = new Node();
    ptr->data = data;

    struct Node *p = head;

    while (p->next!= NULL)
    {
        p = p->next;
    }

    p->next = ptr;
    ptr->next = NULL;

    return head;
}

// Insertion After a given node
struct Node* insertAfterNode(struct Node *head, struct Node *prevNode, int data)
{

    Node *ptr = new Node();
    ptr->data = data;

    ptr->next = prevNode->next;
    prevNode->next = ptr;

    return head;
}


void traverseList(struct Node *ptr)
{
    while (ptr != NULL)
    {
        cout << "Element is: " << ptr->data << endl;
        ptr = ptr->next;
    }
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
    fourth->next = NULL;

    cout << "Before Insertion: \n";

    traverseList(head);

    // head = insertAtBegin(head, 1);

    // head = insertAtIndex(head, 45, 2);

    // head = insertAtEnd(head, 109);

    head = insertAfterNode(head, third, 90);

    cout << "\nAfter Insertion: \n";

    traverseList(head);

    return 0;
}
