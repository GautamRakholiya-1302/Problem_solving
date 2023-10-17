class Solution {
public:
    bool validateBinaryTreeNodes(int n, vector<int>& leftChild, vector<int>& rightChild) {
        vector<int> adj[n];
        vector<int> indegree(n,0);
        for(int i=0; i<n; i++){
            
            if(leftChild[i]!=-1){
                adj[i].push_back(leftChild[i]);
                indegree[leftChild[i]]++;
            }
            if(rightChild[i]!=-1){
                adj[i].push_back(rightChild[i]);
                indegree[rightChild[i]]++;
            }
        }
        int index=-1;
        for(int i=0; i<n; i++){
            if(indegree[i]==0){
                index=i;
                break;
            }
        }
        if(index==-1){
            return false;
        }
        queue<int> q;
        vector<int> vis(n,0);
        q.push(index);
        vis[index]=1;
        while(!q.empty()){
            int x=q.front();
            q.pop();
            for(int child:adj[x]){
                if(vis[child]){
                    return false;
                }
                else{
                    q.push(child);
                    vis[child]=1;
                }
            }
        }
        for(int i=0; i<n; i++){
            if(!vis[i]){
                return false;
            }
        }
        return true;
    }
};
