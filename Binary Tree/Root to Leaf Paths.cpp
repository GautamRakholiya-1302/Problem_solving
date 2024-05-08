class Solution {
  public:
   void solve(Node* root,vector<vector<int>> &ans, vector<int> path){
        if(!root->left && !root->right){
            path.push_back(root->data);
            ans.push_back(path);
            return;
        }
        path.push_back(root->data);
        if(root->left){
            solve(root->left,ans,path);
        }
        if(root->right){
            solve(root->right,ans,path);
        }
    }
    vector<vector<int>> Paths(Node* root) {
        vector<vector<int>> ans;
        vector<int> path;
        solve(root,ans,path);
        return ans;
    }
};
