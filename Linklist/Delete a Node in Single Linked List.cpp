Node* deleteNode(Node *head,int x)
{
    if(!head)return NULL;
  if(x==1)return head->next;
  head->next = deleteNode(head->next,x-1);
  return head;
}
