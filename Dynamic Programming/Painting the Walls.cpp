class Solution {
public:
    int solve(int ind,vector<int> &cost,vector<int> &time,int count,vector<vector<int>>&dp)
    {
        if(ind>=cost.size())
        {
            if(count<=0) return 0;
            else return 1e9;
        }
        if(count<=0) return 0;
        
        if(dp[ind][count]!=-1) return dp[ind][count];
        int notTake=solve(ind+1,cost,time,count,dp);
        int take=cost[ind]+solve(ind+1,cost,time,count-1-time[ind],dp);

        return dp[ind][count]= min(notTake,take);
    }
    int paintWalls(vector<int>& cost, vector<int>& time) {
        
        int n=cost.size();
        vector<vector<int>>dp(n,vector<int>(n+1,-1));
       return solve(0,cost,time,n,dp);
    }
};
