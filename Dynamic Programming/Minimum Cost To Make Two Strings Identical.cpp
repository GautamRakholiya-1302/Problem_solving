class Solution {

  public:
    int findMinCost(string x, string y, int costX, int costY) {
         int n=x.size();
        int m=y.size();
        vector<vector<int>>dp(n+1,vector<int>(m+1,0));
        for(int i=0;i<=n;i++)
        {
            for(int j=0;j<=m;j++)
            {
                if(i==0)
                {
                    dp[i][j]=j*costY;
                }
                else if(j==0)
                {
                    dp[i][j]=i*costX;
                }
                else
                {
                    if(x[i-1]==y[j-1])
                    {
                        dp[i][j]=dp[i-1][j-1];
                    }
                    else
                    {
                        dp[i][j]=min(costX+dp[i-1][j],costY+dp[i][j-1]);
                    }
                }
            }
        }
        return dp[n][m]; // Your code goes here
    }
};
