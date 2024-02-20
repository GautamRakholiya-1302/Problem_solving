class Solution
{
public:
    int wordBreak(int n, string s, vector<string> &dictionary) {
         int l=s.length();
        vector<int>dp(l+1,0);
        dp[0]=1;
        for(int i=0;i<=l;i++)
        {
            for(string& word:dictionary){
                int start=i-word.length();
                if (start >= 0 && dp[start] == 1 && s.substr(start, word.length()) == word) {
                dp[i] = 1;
                break;
                }
            }
        }
        return dp[l];
    }
};
