#include <stdio.h>
#include <stdlib.h>
//#define NULL 0

struct Node
{
    int data;
    struct Node* next;
};
void linkedlistTraversal(struct Node* ptr)
{
    while (ptr!=NULL)
    {
        printf("Element: %d \n",ptr->data);
        ptr=ptr->next;
    }
    
}
struct Node* insertatFirst(struct Node* head,int data)
{
    struct Node* ptr=(struct Node*) malloc(sizeof(struct Node));
    ptr->data=data;
    ptr->next=head;
    return ptr;
}
struct Node*  inseratIndex(struct Node* head,int data,int index)
{
    struct Node* ptr=(struct Node*) malloc(sizeof(struct Node));
    struct Node* p=head;    
    
    int i=0;
    while (i!=index-1)
    {
        p=p->next;
        i++;
    }
    ptr->data=data;
    ptr->next=p->next;
    p->next=ptr;

    return head;
}
struct Node* insertatEnd(struct Node* head,int data)
{
    struct Node* ptr=(struct Node*) malloc(sizeof(struct Node));
    ptr->data=data;

    struct Node* p=head;    
    
    int i=0;
    while (p->next!=NULL)
    {
        p=p->next;
    }
    p->next=ptr;
    ptr->next=NULL;

    return head;
}
struct Node* insertatnode(struct Node* head, int data, struct Node* prevnode)
{
     struct Node* ptr=(struct Node*) malloc(sizeof(struct Node));
     ptr->data=data;
     ptr->next=prevnode->next;
     prevnode->next=ptr;

     return head;
   
}

int main()
{
    struct Node* head;
    struct Node* second;
    struct Node* third;

    head=(struct Node*) malloc(sizeof(struct Node));
    second=(struct Node*) malloc(sizeof(struct Node));
    third=(struct Node*) malloc(sizeof(struct Node));

    head->data=76;
    head->next=second;

    second->data=45;
    second->next=third;

    third->data=65;
    third->next=NULL;
    printf("Before Insertion\n");
    linkedlistTraversal(head);

    head=insertatFirst(head,97);
    printf("After Insertion at first\n");
    linkedlistTraversal(head);

    head=inseratIndex(head,107,2);
    printf("After Insertion at Index\n");
    linkedlistTraversal(head);

    head=insertatEnd(head,21);
    printf("After Insertion at End\n");
    linkedlistTraversal(head);

    head=insertatnode(head,69,third);
    printf("After Insertion at node\n");
    linkedlistTraversal(head);


    return 0;
    
}
