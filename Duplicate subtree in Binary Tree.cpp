class Solution {
  public:
    unordered_map<string,int>m;
    string preorder(Node*root)
    {
        if(!root)return "*";
        string s="";
        if(!root->left && !root->right)
        {
            s="*"+to_string(root->data);
            return s;
        }
        s+=to_string(root->data);
        s+=preorder(root->left);
        s+=preorder(root->right);
        m[s]++;
        return s;
    }
    int dupSub(Node *root) {
           
             preorder(root); 
             for(auto i:m)
             {
                 if(i.second>=2)return true;
             }
             return false;
    }
};
