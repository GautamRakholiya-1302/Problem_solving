class MyStack {
public:
    queue<int>q;
    
    MyStack() {
        
    }
    
    void push(int x) {
        q.push(x);

        
    }
    
    int pop() {
        int size=q.size();
        while(--size)
        {
            int x=q.front();
            q.pop();
            q.push(x);

        }
        int ans=q.front();
        q.pop();

        return ans;

        
    }
    
    int top() {
        return q.back();

        
    }
    
    bool empty() {
        return q.size()==0;

        
    }
};
