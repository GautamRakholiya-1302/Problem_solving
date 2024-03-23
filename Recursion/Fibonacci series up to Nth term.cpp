class Solution {
  public:
    vector<int> Series(int n) {
       int prev=0,prev1=1;

        int mod=1e9+7;

        vector<int>ans;

        ans.push_back(0);

        ans.push_back(1);

        for(int i=1;i<=n-1;i++){

            int curr=(prev+prev1)%mod;

            prev=prev1;

            prev1=curr;

            ans.push_back(prev1);

        }

        return ans;
    }
};
