class Solution {
  public:
    // Function to check whether a Binary Tree is BST or not.
     void inOrder(Node* root,vector<int>&v){
        if(!root) return ;
        inOrder(root->left,v);
        v.push_back(root->data);
        inOrder(root->right,v);
    }
    bool isBST(Node* root) {
        vector<int>v;
        inOrder(root,v);
        map<int,int>mp;
        for(auto i:v){
            if(mp[i])return false;
            mp[i]++;
        }
        return is_sorted(v.begin(),v.end());
    }
};
