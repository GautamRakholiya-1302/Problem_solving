class Solution
{
    public:
    //Function to serialize a tree and return a list containing nodes of tree.
    void inorder(Node* root, vector<int>&v){
        if(root == NULL) return;
        inorder(root->left,v);
        v.push_back(root->data);
        inorder(root->right,v);
    }
    //Function to serialize a tree and return a list containing nodes of tree.
    vector<int> serialize(Node *root) 
    {
        vector<int>v;
        inorder(root,v);
        return v;
        //Your code here
    }
    Node* buildtree(vector<int> &v,int s,int e){
        if(s >= e) return NULL;
        auto mid = s + (e-s) /2;
        Node* root = new Node(v[mid]);
        root->left = buildtree(v,s,mid);
        root->right = buildtree(v,mid+1,e);
        return root;
    }
    
    //Function to deserialize a list and construct the tree.
    Node *deSerialize(vector<int> &v)
    {
        return buildtree(v,0,v.size());
    }

};
