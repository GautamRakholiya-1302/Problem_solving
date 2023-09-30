class Solution
{   
    public:
    
    void booleanMatrix(vector<vector<int> > &matrix)
    {
        unordered_set<int>row;
        unordered_set<int>col;
        int n=matrix.size();
        int m=matrix[0].size();
        for(int i=0;i<n;i++){
            for(int j=0;j<m;j++){
                 if(matrix[i][j] == 1){
                     row.insert(i);
                     col.insert(j);
                 }
            }
        }
        for(auto i:row){
            for(int j=0;j<m;j++){
                  matrix[i][j]=1;
            }
        }
        for(auto j:col){
            for(int i=0;i<n;i++){
                  matrix[i][j]=1;
            }
        }
    }
};

