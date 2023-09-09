class Solution
{
    public:
   void inorder(Node* root, vector<int> &ans)
    {
        if(root==NULL)
        {
            return;
        }
        inorder(root->left, ans);
        ans.push_back(root->data);
        inorder(root->right, ans);
    }
    int kthLargest(Node *root, int K)
    {
        //Your code here
        vector<int> ans;
        inorder(root, ans);
        sort(ans.begin(),ans.end());
        int size=ans.size();
        return ans[size-K];
    }
};

// second Approch

 // void helper(Node* root,int &K,int &ans)
 //    {
 //        if(root==NULL)
 //          return ;
 //        if(K==0)
 //          return;
 //        helper(root->right,K,ans);
 //        if(K>0)
 //        {
 //            ans=root->data;
 //            K--;
 //        }
 //        helper(root->left,K,ans);
 //    }
 //    int kthLargest(Node *root, int K)
 //    {
 //        //Your code here
 //        int ans=0;
 //        helper(root,K,ans);
 //        return ans;
        
 //    }
