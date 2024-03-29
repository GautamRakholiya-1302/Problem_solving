class Solution {
public:   
    int minValue(Node* root) {
         int ans=INT_MIN;
        
       struct Node* tempo = root;
        
        while(tempo)
        {
            ans=tempo->data;
            tempo=tempo->left;
        }
        
        return ans;
    }
};
