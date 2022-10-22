
// Code written by Sachin Shah 
// Let's connect on GitHub - @imsachinshah
// Twitter - "@imsachinshah0"


#include<iostream>
using namespace std;

// Creating Node of Linked List
struct Node
{
    int data;
    struct Node* next;
};

void traverseList(struct Node* ptr){
    while (ptr != NULL)
    {
        cout << "Element is: " << ptr->data << endl;
        ptr = ptr->next;
    }
    
}

int main() {

    Node* head = new Node();
    Node* second = new Node();
    Node* third = new Node();
    Node* fourth = new Node();

    head->data = 2;
    head->next = second;

    second->data = 72;
    second->next = third;

    third->data = 92;
    third->next = fourth;

    fourth->data = 99;
    fourth->next = NULL;

    traverseList(head);

    return 0;
}
