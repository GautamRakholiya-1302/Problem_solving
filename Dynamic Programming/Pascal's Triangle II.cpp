
class Solution {
public:
    vector<int> getRow(int rowIndex) {
        vector<int>ans(rowIndex+1);
        vector<int>prev(rowIndex+1);
        for(int i=0;i<=rowIndex;i++)
        {
            for(int j=0;j<=i;j++)
            {
                if(j==0 or  j==i)
                {
                    ans[j]=1;
                }
                else
                {
                    ans[j]=prev[j]+prev[j-1];
                }
            }
            prev=ans;
        }
        return ans;
    }
};
