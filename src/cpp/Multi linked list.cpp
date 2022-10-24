#include<iostream>
using namespace std;
class TT
{public:
    int slot;
    char *subj;
};
class Node
{
    public:
    TT obj;
    Node *next;
};
class Node1 {
    public:
int cnt ;
Node * headIn;
Node1()
{
    cnt=0;
    headIn=NULL;
}
};
void printList(Node *head)
{
    while (head != NULL)
    {
        cout <<"slot->"<<head->obj.slot<< ",";
         cout <<"subj->" <<head->obj.subj<< "   ";
        head = head->next;
    }    cout<<endl;}
void sortedInsert(Node** head_ref,Node* new_node)
{
    Node* current;
if (*head_ref == NULL || (*head_ref)->obj.slot>= new_node->obj.slot) {
        new_node->next = *head_ref;
        *head_ref = new_node;
    }
    else {current = *head_ref;
        while (current->next != NULL && current->next->obj.slot < new_node->obj.slot) {
            current = current->next;
        }
        new_node->next = current->next;
        current->next = new_node;
    }}
int main()
{
Node1 head[3];
  int i,j,data1;
  char name[10];
  int choice;
    /* create 8 linked lists */
    do
	{	cout<<"1: add node"<<endl;
		cout<<"2: quit"<<endl;
		cin>>choice;
		if(choice==1)
		{
    cout<<"0-Monday\n";
    cout<<"1-Tuesday\n";
    cout<<"2-Wednesday\n";
    cout<<"3-Thursday\n";
    cout<<"4-Friday\n";
    cout<<"5-Satday\n\n";
    cout<<"Enter number corresponding to the day you want to enter data:\n";
    cin>>j;
    
    cout<<"enter data";
    cin>>data1;

    cout<<"enter name";
    cin>>name;
    
    Node *p;
    Node *newnode= new Node();
    newnode->obj.slot=data1;
    newnode->obj.subj=name;
    if (newnode->obj.subj=="ds")
        {
              head[j].cnt++;
        }
    newnode->next=NULL;
sortedInsert(&head[j].headIn,newnode);
		}
	} while(choice==1);
int max1 = 0, index;
for(i=0;i<3;i++)
{
    if (max1 < head[i].cnt) {
        max1 = head[i].cnt;
        index = i;
    }
    printList(head[i].headIn);
}
cout<<"maximum number of ds classes are "<<max1<< " in "<<index<<" header";
}

