class Solution {
public:
   int FindCoverage(vector<vector<int>>&m){
         int sum=0;
        for(int i=0;i<m.size();i++){
            for(int j=0;j<m[0].size();j++){
                if(m[i][j]==1)continue;
                if(i>0 && m[i-1][j]==1)sum++;
                if(i<m.size()-1 && m[i+1][j]==1)sum++;
                if(j>0 && m[i][j-1]==1)sum++;
                if(j<m[0].size()-1 && m[i][j+1]==1)sum++;
            }
        }
        return sum;
    }
};
