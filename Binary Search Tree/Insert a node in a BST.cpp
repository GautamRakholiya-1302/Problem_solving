class Solution
{
    public:
       Node* insert(Node* root, int data) {
        
            if(root==NULL)
            {
                return new Node(data);
            }
            if(root->data==data)
            {
                return root;
            }
            if(root->data > data)
            {
                root->left=insert(root->left,data);
            }
            else if(root->data < data)
            {
                root->right=insert(root->right,data);
            }
            return root;
    }

};


// Second Approch
// class Solution
// {
//     public:
//         Node* insert(Node* node, int data) {
        
//         Node* temp = node;
//         Node* newNode = new Node(data);
//         Node* t = node;
//         while(temp) {
//             if(temp->data < data && temp->right) {
//                 temp = temp->right;
//             } else if(temp->data > data && temp->left) {
//                 temp = temp->left;
//             } else {
//                 break;
//             }
//         }
//         if(temp->data == data) {
//             return node;
//         } 
//         if(temp->data < data) {
//             temp->right = newNode;
//         } else {
//             temp->left = newNode;
//         }
//         return node;
//     }
// };
