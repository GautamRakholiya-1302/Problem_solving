class Solution
{
    public:
    //Function to delete a node without any reference to head pointer.
    void deleteNode(Node *del_node)
    {
        if(del_node==NULL || del_node->next==NULL) return;
       Node* temp=del_node;
       temp->data=temp->next->data;
       Node* deleteNode=temp->next;
       Node* nextNode=NULL;
       if(temp->next!=NULL){
           nextNode=temp->next->next;
       }
       temp->next=nextNode;
       delete deleteNode;// Your code here
    }

};
