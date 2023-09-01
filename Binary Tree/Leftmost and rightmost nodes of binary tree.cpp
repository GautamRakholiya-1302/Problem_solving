void printCorner(Node *root)
{

  queue<Node*> q;
  q.push(root);
  while(!q.empty())
  {
      int size=q.size();
      for(int i=0;i<size;i++)
      {
          Node* r=q.front();
          q.pop();
          if(i==0||i==size-1)
          {
              cout<<r->data<<" ";
          }
          if(r->left)
          {
              q.push(r->left);
          }
          if(r->right)
          {
              q.push(r->right);
          }
      }
  }

}
