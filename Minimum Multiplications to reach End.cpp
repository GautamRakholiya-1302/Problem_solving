class Solution {
  public:
    int minimumMultiplications(vector<int>& arr, int start, int end) {
           if(start==end)
            return 0;
        bool vis[100001]={false};
        queue<int> q;
        q.push(start);
        int ans=1;
        vis[start]=true;
        while(!q.empty()){
            int s=q.size();
            while(s--){
                int src=q.front();
                q.pop();
                for(int x:arr){
                    int v=(src*x)%100000;
                    if(v==end)
                        return ans;
                    if(!vis[v])
                        vis[v]=true,q.push(v);
                }
            }
            ans++;
        }
        return -1;
    }
};
