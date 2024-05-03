class Solution
{
    public:
    // function should print the nodes at k distance from root
   void solve(Node * root,int k,int dist,vector<int>&ans){
        if(root==NULL || dist>k){
            return ;
        }
        if(dist==k){
            ans.push_back(root->data);
        }
        solve(root->left,k,dist+1,ans);
        solve(root->right,k,dist+1,ans);
    }
    vector<int> Kdistance(struct Node *root, int k)
    {
      // Your code here
      vector<int>ans;
      solve(root,k,0,ans);
      return ans;
    }
};
