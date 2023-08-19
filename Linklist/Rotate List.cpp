class Solution {
public:
    ListNode* rotateRight(ListNode* head, int k) {
        if(head==NULL || k==0)
        {
            return head;

        }
        int n=0;
        ListNode *temp=head;
        int count=0;
        while(temp->next)
        {
            temp=temp->next;
            count++;

        }
        temp->next=head;
        k=k%(count+1);
        int jump=count-k;
        temp=head;
        while(jump)
        {
            temp=temp->next;
            jump--;
        }
        ListNode *start=temp->next;
        temp->next=NULL;
        return start;
    }
};
