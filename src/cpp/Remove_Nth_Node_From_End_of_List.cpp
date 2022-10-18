class Solution {
public:
    ListNode* removeNthFromEnd(ListNode* head, int n) {
        ListNode* temp=head,*temp1=head;
        
        while(n>=1){
            temp1=temp1->next;
            n--;
        }
        if(temp1==NULL)return head->next;
        while(temp1->next!=NULL){
            temp=temp->next;
            temp1=temp1->next;
        }

        temp->next=temp->next->next;
        return head;
    }
};
