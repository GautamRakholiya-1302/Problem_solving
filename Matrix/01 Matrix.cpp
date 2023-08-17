class Solution {
public:

    bool check(int i int j,int n,int m)
    {
        if(i<0 || j<0 || i>=n || j>=m)
        {
            return false;
        }
        return true;

    }
    vector<vector<int>> updateMatrix(vector<vector<int>>& mat) {
        int n=mat.size();
        int m=mat[0].size();
        vector<vector<int>>ans(n,(vector<int>(m,-1)));
        queue<pair<int,int>>q;

        for(int i=0;i<n;i++)
        {
            for(j=0;j<m;j++)
            {
                if(mat[i][j]==0)
                {
                    ans[i][j]=0;
                    q.push({i,j});
                }
            }
        }
        while(!q.empty())
        {
            int i= q.front().first;
            int j=q.front().second;
            if(ans[i+1][j]==-1  && check(i+1,j,n,m))
            {
                ans[i+1][j]=ans[i][j]+1;
                q.push({i+1,j});
            }
            if(ans[i-1][j]==-1  && check(i-1,j,n,m))
            {
                ans[i-1][j]=ans[i][j]+1;
                q.push({i-1,j});
            }
            if(ans[i][j+1]==-1  && check(i,j+1,n,m))
            {
                ans[i][j+1]=ans[i][j]+1;
                q.push({i,j+1});
            }
           if(ans[i][j-1]==-1  && check(i,j-1,n,m))
            {
                ans[i][j-1]=ans[i][j]+1;
                q.push({i,j-1});
            }
        }
        return ans;
        
    }
};
