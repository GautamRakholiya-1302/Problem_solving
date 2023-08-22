class Solution
{
    public:
    
    int findMinOpeartion(vector<vector<int> > mat, int n)
    {
        int totalsum=0;
        int maxi=INT_MIN;
        for(int i=0;i<n;i++)
        {
            int rowsum=0;
            int colsum=0;
            
            for(int j=0;j<n;j++)
            {
               rowsum=rowsum+mat[i][j];
               colsum=colsum+mat[j][i];
               totalsum=totalsum+mat[i][j];
            }
            maxi=max(maxi,max(rowsum,colsum));
            
            
        }
        int result=(maxi*n)-totalsum;
        return result;
    } 
    
    
