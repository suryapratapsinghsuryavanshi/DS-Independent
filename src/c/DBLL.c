#include<stdio.h>
#include<stdlib.h>


struct Node
{
    int data;
    struct Node* prev;
    struct Node* next;
};

void linkedlistTraversal(struct Node*ptr){
    while (ptr!=NULL)
    {
        printf("The Element is : %d \n",ptr->data);
        ptr=ptr->next;
    }
}

void linkedlistReversal(struct Node*ptr){
    while (ptr!=NULL)
    {
        printf("The Element is : %d \n",ptr->data);
        ptr=ptr->prev;
    }
}


int main(){

 struct Node*head;
 struct Node*second;
 struct Node*third;
 struct Node*fourth;

 head= (struct Node*)malloc(sizeof(struct Node));
 second= (struct Node*)malloc(sizeof(struct Node));
 third= (struct Node*)malloc(sizeof(struct Node));
 fourth= (struct Node*)malloc(sizeof(struct Node));

  head->data= 34;
  head->next=second;
  head->prev=NULL;

  second->data= 45;
  second->next=third;
  second->prev=head;

  third->data=56;
  third->next=fourth;
  third->prev=second;

  fourth->data=67;
  fourth->next=NULL;
  fourth->prev=third;

printf("While Traversing the linked  list \n");
linkedlistTraversal(head);
printf("While Reversing the linked list \n");
linkedlistReversal(head);



return 0;
}