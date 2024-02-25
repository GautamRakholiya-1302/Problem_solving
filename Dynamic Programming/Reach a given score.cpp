class Solution
{
    public:
    // Complete this function
   int solve(int ind ,long long int target ,vector<int> &coins, vector<vector<int>> &dp){
            
        if (ind == 0)
        {
            return target % coins[ind] == 0;
        }
        if (dp[ind][target] != -1)
        {
            return dp[ind][target];
        }

        int notTake = solve(ind - 1, target, coins,dp);
        int take = 0;
        if (target >= coins[ind])
        {
            take = solve(ind, target - coins[ind], coins,dp);
        }
        
        return dp[ind][target]= take+notTake;
            
    }
    long long int count(long long int n)
    {
        // Your code here
        vector<int> v={3,5,10};
        vector<vector<int>> dp(3, vector<int>(n + 1, -1));

        
        int cnt=0;
        long long sum=0;
        int ind=0;
        return solve(2,n,v,dp);
    	
    }
};
