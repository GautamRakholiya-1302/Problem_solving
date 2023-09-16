
class Solution
{
    public:
    //Function to count the number of ways in which frog can reach the top.
     long long mod=1e9+7;
    long long solve(int i,vector<int>& dp)
    {
        if(i==0) return 1;
        if(i<0) return 0;
        if(dp[i]!=-1) return dp[i];        
        return dp[i]=(solve(i-1,dp)+solve(i-2,dp)+solve(i-3,dp))%mod;
    }
    long long countWays(int n)
    {
        vector<int> dp(n+1,-1);
        return solve(n,dp);
        
    }
};
