class Solution {
public:
    int diameter(TreeNode* root, int &temp)
    {
        if(root==NULL) return 0;
        int left=diameter(root->left,temp);
        int right=diameter(root->right,temp);
        temp=max(temp,left+right);
        return max(left,right)+1;

    }
    
     int diameterOfBinaryTree(TreeNode* root) {
        int temp=0;
        diameter(root,temp);
        return temp;

    }
};
