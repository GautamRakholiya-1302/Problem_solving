class Solution{
  public:
    int countMin(string str){
    //complete the function here
     int n = str.length();
        
        // Create a table to store results of sub-problems
        vector<vector<int>> dp(n, vector<int>(n, 0));
        
        // Fill the table
        for (int gap = 1; gap < n; ++gap) {
            for (int i = 0; i < n - gap; ++i) {
                int j = i + gap;
                if (str[i] == str[j]) {
                    dp[i][j] = dp[i + 1][j - 1];
                } else {
                    dp[i][j] = min(dp[i][j - 1], dp[i + 1][j]) + 1;
                }
            }
        }
        
        return dp[0][n - 1];
    }
};
