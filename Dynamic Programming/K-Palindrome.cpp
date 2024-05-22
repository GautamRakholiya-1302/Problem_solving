
class Solution{
public:
    int kPalindrome(string str, int n, int k)
    {
        vector<vector<int>> dp(n + 1, vector<int>(n + 1, 0));
        for (int i = 1; i <= n; ++i) {
            for (int j = 1; j <= n; ++j) {
                if (str[i - 1] == str[n - j]) {
                    dp[i][j] = dp[i - 1][j - 1] + 1;
                } else {
                    dp[i][j] = max(dp[i - 1][j], dp[i][j - 1]);
                }
            }
        }
        int lps = dp[n][n];
        int minDeletions = n - lps;
        return minDeletions <= k;// code here
    }
};
