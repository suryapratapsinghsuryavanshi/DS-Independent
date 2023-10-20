#include <iostream>
using namespace std;

struct Node
{
    int data;
    struct Node* next;
};

void midNode(struct Node* head){
    struct Node* c = head, *p = head;
    int count = 0;

    while (c->next != NULL)
    {
        c = c->next;
        count += 1;
    }
    if (count % 2 == 1)
        count = (count/ 2) + 1;
    else
        count = (count)/2;
    
    for (int i = 0; i < count; i++)
    {
        p = p->next;
    }
    
    cout<< "Middle Node is:" << p->data << endl;

    
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

    cout << "List Details: \n";

    traverseList(head);

    midNode(head);

    cout << "\nAfter Printing Middle Node\n";

    traverseList(head);

    return 0;
}





























