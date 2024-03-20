class Solution
{
public:
    
     int height(Node* root){
        if(!root) return 0;
        return 1+max(height(root->left), height(root->right));
    }
    void solve(Node* root, int tot, int height, int &res){
        if(height==0){
            res=max(res, tot);
            return;
        }
        
        if(!root) return;
        solve(root->left, tot+root->data, height-1, res);
        solve(root->right, tot+root->data, height-1, res);
    }
    int sumOfLongRootToLeafPath(Node *root){
        int h=height(root);
        
        int res=INT_MIN;
        solve(root, 0, h, res);
        return res;
    }
};
