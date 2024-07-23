class Solution {
  public:
    // Function to return a list of integers denoting the node
    // values of both the BST in a sorted order.
   void traverse(Node *root, vector<int> &ans){
        if(!root) return;
        traverse(root->left, ans);
        ans.push_back(root->data);
        traverse(root->right, ans);
    }
  public:
    // Function to return a list of integers denoting the node
    // values of both the BST in a sorted order.
    vector<int> merge(Node *root1, Node *root2) {
        // Your code here
        vector<int> ans;
        traverse(root1, ans);
        traverse(root2, ans);
        sort(ans.begin(), ans.end());
        return ans;
    }
};
