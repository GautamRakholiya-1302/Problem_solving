class Solution
{
    public:
    //Function to return the level order traversal of a tree.
    vector<int> levelOrder(Node* root)
    {
      queue<Node*> q;
      vector<int> v;
      q.push(root);
      while(!q.empty()){
          struct Node* ptr = q.front();
          v.push_back(ptr->data);
          q.pop();
          if(ptr->left) q.push(ptr->left);
          if(ptr->right) q.push(ptr->right);
      }
      return v;//Your code here
    }
};
