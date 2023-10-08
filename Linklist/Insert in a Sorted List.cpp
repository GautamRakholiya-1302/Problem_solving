class Solution{
  public:
    // Should return head of the modified linked list
    Node *sortedInsert(struct Node* head, int data) {
        Node *temp =new Node (data);
        if(head==NULL)
        {
            return temp;
            
        }
        if(head->data>data)
        {
            temp->next=head;
            return temp;
        }
        Node *curr=head;
        while(curr->next !=NULL && curr->next->data<data)
        {
            curr=curr->next;
            
        }
        Node *next =curr->next;
        curr->next=temp;
        temp->next=next;
        return head;
    }
};
