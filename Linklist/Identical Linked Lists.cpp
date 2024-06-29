int len(Node*head)
{
    if(head==nullptr) return 0;
    return 1+len(head->next);
}
bool areIdentical(struct Node *head1, struct Node *head2) {
    // Code here
    if(len(head1)!=len(head2)) return false;
    else{
        struct Node*p=head1; struct Node*q=head2;
        while(p!=nullptr && q!=nullptr)
        {
            if(p->data!=q->data) return false;
            
            p=p->next;
            q=q->next;
        }
        
    }
    return true;
}
