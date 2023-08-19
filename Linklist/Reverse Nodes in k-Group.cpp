class Solution {
public:
    ListNode *reverse(ListNode* head,ListNode* tail)
    {
        ListNode *prev=NULL;
        ListNode *temp=NULL;
        ListNode *curr=head;

        while(curr !=tail)
        {
            temp=curr->next;
            curr->next=prev;
            prev=curr;
            curr=temp;
        }
        return prev;
        

    }
      
    ListNode* reverseKGroup(ListNode* head, int k) {
        ListNode *ptr=head;
        for(int i=0;i<k;i++)
        {
            if(!ptr)
            {
                return head;

            }
            ptr=ptr->next;
        }
        ListNode *temp=reverse(head,ptr);
        head->next=reverseKGroup(ptr,k);
        return temp;
    }
};
