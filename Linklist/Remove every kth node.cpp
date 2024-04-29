class Solution {
    public:
    Node* deleteK(Node *head,int K){
      if(head==NULL || K==1){
            return NULL;
        }
        
      Node*prev=NULL;
      Node*temp=head;
      int i=0;
      while(temp!=NULL){
           i++;
              if(i==K){
                  prev->next=temp->next;
                  temp->next=NULL;
                  temp=prev->next;
                  i=0;
              }else{
                  prev=temp;
                  temp=temp->next;

              }
          
      }
      return head;
       //Your code here
    }
};
