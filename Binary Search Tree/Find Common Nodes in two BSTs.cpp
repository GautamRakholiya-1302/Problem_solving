class Solution
{
    public:
     void traversal(Node* root,vector<int>&r){
        if(root){
            traversal(root->left,r);
            r.push_back(root->data);
            traversal(root->right,r);
        }
    }
    vector <int> findCommon(Node *root1, Node *root2)
    {  
        vector<int>r;
        vector<int>a,b,c;
        
         traversal(root1,a);
         traversal(root2,b);
         int i=0,j=0;
        while(i<a.size()&& j<b.size()){
            if(a[i]==b[j]){
              c.push_back(a[i]);
              i++;
              j++;
            }
            else if(a[i]<b[j]){
                i++;
            }
            else{
                j++;
            }
        }
  
        return c;
  }
};
