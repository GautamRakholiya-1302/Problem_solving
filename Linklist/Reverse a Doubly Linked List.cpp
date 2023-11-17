class Solution
{
    public:
    Node* reverseDLL(Node * head)
    {
        while(head){
    swap(head->next, head->prev);
    if(head->prev == NULL) return head;
    head = head->prev;
}
return head;
    }
};
