class Solution
{
    public:
   Node* pairWiseSwap(struct Node* head)
    {
        if(!head || !head->next)
            return head;
            
        Node* sec = head->next;
        head->next = pairWiseSwap(sec->next);
        sec->next = head;
        return sec;
    }
};
