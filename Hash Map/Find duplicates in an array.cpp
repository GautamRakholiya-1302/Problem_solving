
class Solution{
  public:
    vector<int> duplicates(int arr[], int n) {
        unordered_map<int,int>mp;
        for(int i=0;i<n;i++)
        {
            mp[arr[i]]++;
            
        }
        vector<int>ans;
        
        for(auto it :mp)
        {
            if(it.second>1)
            {
                ans.push_back(it.first);
                
            }
            
        }
        if(ans.size()==0)
        {
            ans.push_back(-1);
        }
        sort(ans.begin(),ans.end());
        
        return  ans;
    }
};
