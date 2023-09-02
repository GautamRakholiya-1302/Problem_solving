class Solution
{
public:
    int getCount(Node *root, int k)
    {
        queue<Node*> q;
        int count=0;
        int level=0;
        if(!root){
            return 0;
        }
        q.push(root);
        while(q.size()){
            level++;
            int n=q.size();
            for(int i=0;i<n;i++){
                Node* node=q.front();
                q.pop();
                if(node->left==NULL && node->right==NULL){
                    if(k>=level){
                        k-=level;
                        count++;
                    }
                    else{
                        return count;
                    }
                }
                if(node->left){
                    q.push(node->left);
                }
                if(node->right){
                    q.push(node->right);
                }
            }
        }
        return count;

    }
};
