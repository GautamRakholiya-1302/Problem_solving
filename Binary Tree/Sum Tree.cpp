class Solution {
  public:
    bool isSumTree(Node* root) {
        if(!root) return 1;
        if(root->left == nullptr && root->right == nullptr) return 1;
        
        auto checkTree = sumTreeHelper(root);
        
        return checkTree.second;
    }
  private:
    pair<int, bool> sumTreeHelper(Node *root) {
        if(!root) return {0, true};
        if(root->left == nullptr && root->right == nullptr) return {root->data, true};
        
        auto leftSum = sumTreeHelper(root->left);
        auto rightSum = sumTreeHelper(root->right);
        
        if(leftSum.second != true || rightSum.second != true) return {-1, false};
        int childSum = leftSum.first + rightSum.first;
        if(root->data == childSum)
            return {root->data + childSum, true};
        
        return {-1, false}; // Your code here
    }
};
