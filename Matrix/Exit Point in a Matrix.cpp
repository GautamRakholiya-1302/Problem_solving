class Solution {
  public:
    vector<int> FindExitPoint(int n, int m, vector<vector<int>>& matrix) {
        vector<int> ans(2);
        int i=0,j=0,dir=0;
        while(i>=0 && i<n && j>=0 && j<m)
        {
            if(dir==0)
            {
                if(matrix[i][j] == 1)
                {
                    matrix[i][j]=0;
                    i++;
                    dir=1;
                }
                else    j++;
            }
            else if(dir == 1)
            {
                if(matrix[i][j] == 1)
                {
                    matrix[i][j]=0;
                    j--;
                    dir=2;
                }
                else    i++;
            }
            else if(dir == 2)
            {
                if(matrix[i][j] == 1)
                {
                    matrix[i][j]=0;
                    i--;
                    dir=3;
                }
                else    j--;
            }
            else if(dir==3)
            {
                if(matrix[i][j] == 1)
                {
                    matrix[i][j]=0;
                    j++;
                    dir=0;
                }
                else    i--;
            }
        }
        if(i < 0)   i=0;
        if(i >= n)  i=n-1;
        if(j < 0)   j=0;
        if(j >= m)  j=m-1;
        ans[0] = i;
        ans[1] = j;
        return ans;// Code here
    }
};
