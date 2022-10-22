
// Code written by Sachin Shah 
// Let's connect on GitHub - @imsachinshah
// Twitter - "@imsachinshah0"

#include <iostream>
#include<cstdlib>
using namespace std;

// Creating Node of Linked List
struct Node
{
    int data;
    struct Node *next;
};

// Deletion at Beginning
struct Node* deleteAtBegin(struct Node *head)
{

    Node *ptr = new Node();

    ptr = head;
    head = head->next;

    free(ptr);

    return head;
}

// Deleteion in Between
struct Node* deleteAtIndex(struct Node *head, int index)
{

    Node *p = new Node();
    int i = 0;

    p = head;

    while (i != index - 1)
    {
        p = p->next;
        i++;
    }

    struct Node *q = p->next;    
    p->next = q->next;
    
    free(q);

    return head;
}

// Deleteion at End
struct Node* deleteAtEnd(struct Node *head)
{

    Node *p = new Node();
    Node *q = new Node();

    p = head;
    q = head->next;

    while (q->next!= NULL)
    {
        p = p->next;
        q = q->next;
    }

    p->next = NULL;
    free(q);

    return head;
}

// Deleteion After a given node
struct Node* deleteAfterNode(struct Node *head, struct Node *prevNode)
{

    Node *ptr = new Node();
    ptr = head;

    while(ptr->next != prevNode){
        ptr = ptr->next;
    }

    ptr->next = prevNode->next;
    free(prevNode);

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

    cout << "Before deletion: \n";

    traverseList(head);

    // head = deleteAtBegin(head);

    // head = deleteAtIndex(head, 2);

    // head = deleteAtEnd(head);

    head = deleteAfterNode(head, second);

    cout << "\nAfter deletion: \n";

    traverseList(head);

    return 0;
}
