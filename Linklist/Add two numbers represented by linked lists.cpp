class Solution
{
    public:
    //Function to add two numbers represented by linked list.
    struct Node* addTwoLists(struct Node* num1, struct Node* num2)
    {
         Node * prev = nullptr;
        while(num1){
            Node * temp = num1->next;
            num1->next = prev;
            prev = num1;
            num1 = temp;
        }
        num1 = prev;
        prev = nullptr;
        while(num2){
            Node * temp = num2->next;
            num2->next = prev;
            prev = num2;
            num2 = temp;
        }
        num2 = prev;
        int sum = num1->data+num2->data;
        Node * ans = new Node (sum%10);
        int carry = (sum =sum/10);
        num1 = num1->next;
        num2 = num2->next;
        ans ->next = nullptr;
        prev = ans;
        
        
        while(num1 and num2){
            
            sum = num1->data + num2->data + carry;
            Node * newNode = new Node(sum%10);
            carry = (sum=sum/10);
            newNode ->next = prev;
            prev = newNode ;
            num1= num1->next;
            num2 = num2->next;
        }
        while(num1){
            int sum = num1->data + carry;
            Node * newNode = new Node (sum%10);
            carry = (sum=sum/10);
            newNode ->next = prev;
            prev = newNode;
            num1 = num1->next;
        }
        while(num2){
            int sum = num2->data + carry;
            Node * newNode = new Node (sum%10);
            carry = (sum=sum/10);
            newNode ->next = prev;
            prev = newNode;
            num2= num2->next;
        }
        while(carry !=0){
            Node * newNode = new Node (carry%10);
            newNode->next = prev;
            prev = newNode;
            carry = carry/10;
        }
        while(prev and prev->data == 0){
            if(!prev->next) break;
            prev = prev ->next;
        }
        
        return prev;// code here
    }
};
