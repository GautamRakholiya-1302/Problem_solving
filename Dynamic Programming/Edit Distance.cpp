class Solution {
  public:
   int calc(string &s1, string &s2, vector<vector<int>>&dp, int i, int j)
    {
        if(i>=s1.size())
            return s2.size()-j;
        if(j>=s2.size())
            return s1.size()-i;
        if(dp[i][j] != -1)
            return dp[i][j];
        if(s1[i] == s2[j])
            return dp[i][j] = calc(s1,s2,dp,i+1,j+1);
        return dp[i][j] = 1 +min({calc(s1,s2,dp,i,j+1),calc(s1,s2,dp,i+1,j),calc(s1,s2,dp,i+1,j+1)});
        
    }
    int editDistance(string str1, string str2) {
        // Code here
        vector<vector<int>>dp(str1.size(),vector<int>(str2.size(),-1));
        return calc(str1,str2,dp,0,0);
    }
};
