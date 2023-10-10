int ans=1;
    int  solve(Node*  root)
   {
       if(root==NULL) return 0;
       int l=solve(root->left);
       int r=solve(root->right);
       if(abs(l-r)>1) ans=0;
       return max(l,r)+1;
   }
   
   bool isBalanced(Node *root)
   {
     solve(root);
     return ans;
     
