class Solution {
  public:
    int solve(vector<int> &cost, int w, int i,vector<vector<int>>& dp)
  {
      if(i>=cost.size()) 
      {
          if(w==0) return 0;
          return 1e9;
      }
      if(w<0) return 1e9;
      if(dp[i][w]!=-1) return dp[i][w];
      
      int pick=0;
      if(cost[i]!=-1)
        pick+=cost[i]+solve(cost,w-(i+1),i,dp);
        
      int nopick=solve(cost,w,i+1,dp);
      return dp[i][w]=min(pick,nopick);
  }
  
    int minimumCost(int n, int w, vector<int> &cost) {
        vector<vector<int>>dp(n+1,vector<int>(w+1,-1));
        return solve(cost,w,0,dp);
    }
};
