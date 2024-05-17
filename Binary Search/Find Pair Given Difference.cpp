class Solution {
  public:
    int findPair(int n, int x, vector<int> &arr) {
       unordered_map<int,int>mp;
        for(int i=0; i<n; i++){
            mp[arr[i]]++;
        }
        
        if(x==0){
            for(auto it:mp){
                if(it.second>1){
                    return 1;
                }
            }
            return -1;
        }
        
        for(int i=0; i<n; i++){
            if(mp.find(arr[i]+x)!=mp.end()){
                return 1;
            }
        }
        return -1; // code here
    }
};
