class Solution {
public:
    ListNode *detectCycle(ListNode *head) {
        if(head==NULL || head->next==NULL)
        {
            return NULL;
            
        }
        ListNode * slow= head;
        ListNode * fast=head;
        ListNode * curr=head;

        while(fast->next!=NULL && fast->next->next!=NULL)
        {
           fast= fast->next->next;
           slow= slow->next;
           if(slow==fast)
           {
               while(slow!=curr)
               {
                   slow=slow->next;
                   curr=curr->next;

               }
               return curr;
           }
        }
        return NULL;
    }
};
