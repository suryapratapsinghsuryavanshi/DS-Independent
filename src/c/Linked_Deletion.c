#include <stdio.h>
#include <stdlib.h>

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
struct Node* deletionatFirst(struct Node* head)
{
    struct Node* ptr=head;
    head=head->next;
    free(ptr);
    return head;
}

struct Node* deletionatIndex(struct Node* head,int index)
{

    struct Node* p=head;
    struct Node* q=head->next;
    int i=0;
    while (i!=index-1)
    {
        p=p->next;
        q=q->next;
        i++;
    }
    p->next=q->next;
    free(q);
    return head;
} 
struct Node* deletionatLast(struct Node* head)
{

    struct Node* p=head; 
    struct Node* q=head->next;
    while (q->next!=NULL)
    {
        p=p->next;
        q=q->next;
    }
    p->next=NULL;
    free(p);
    return head;

} 
struct Node* deletebyvalue(struct Node* head, int value)
{
    struct Node *p=head;
    struct Node *q=head->next;
    while (q->data!=value && q->next!=NULL)
    {
        p=p->next;
        q=q->next;
    }
    if (q->data ==value)
    {
        p->next=q->next;
        free(q);
    }
    return head;
}

int main()
{
    struct Node* head;
    struct Node* second;
    struct Node* third;
    struct Node* fourth;
    struct Node* fifth;
    struct Node* sixth;

    head=(struct Node*) malloc(sizeof(struct Node));
    second=(struct Node*) malloc(sizeof(struct Node));
    third=(struct Node*) malloc(sizeof(struct Node));
    fourth=(struct Node*) malloc(sizeof(struct Node));
    fifth=(struct Node*) malloc(sizeof(struct Node));
    sixth=(struct Node*) malloc(sizeof(struct Node));

    head->data=76;
    head->next=second;

    second->data=45;
    second->next=third;

    third->data=65;
    third->next=fourth;

    fourth->data=99;
    fourth->next=fifth;

    fifth->data=100;
    fifth->next=sixth;

    sixth->data=5;
    sixth->next=NULL;
    printf("Before Insertion\n");
    linkedlistTraversal(head);

    head=deletionatIndex(head,3);
    printf("After deletion at index\n");
    linkedlistTraversal(head);

    head=deletionatLast(head);
    printf("After deletion at Last\n");
    linkedlistTraversal(head);

    
    head=deletionatFirst(head);
    printf("After deletion at First\n");
    linkedlistTraversal(head);

   


    return 0;
    
}