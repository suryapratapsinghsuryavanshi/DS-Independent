class Solution {
public:

    ListNode* reverseKGroup(ListNode* head, int k) {
      if(head==NULL||k==1)return head;
        ListNode* temp=new ListNode(0);
           temp->next=head;
        ListNode*curr=temp,*Next=temp,*prev=temp ;
        int count=0;
     
  while(curr->next!=NULL){
      curr=curr->next;
      count++;
  }
        while(count>=k){
            curr=prev->next;
            Next=curr->next;
            for(int i=1;i<k;i++){
                curr->next=Next->next;
                Next->next=prev->next;
                prev->next=Next;
                Next=curr->next;
            }
            prev=curr;
            count-=k;
        }
     
      return temp->next;
    }
};
