class Solution {
public:
    int countHomogenous(string s) {
        int  count=0,ans=0;

        for(int i=0;i<s.size();++i)
        {
            if(i>0 && s[i-1]==s[i])
            {
                ++count;
            }
            else
            {
                count=1;

            }
            ans=(count+ans)%1000000007;
        }
        return ans;

    }
};
