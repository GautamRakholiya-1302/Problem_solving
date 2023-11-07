class Solution
{   
    public:
    //Function to return sum of upper and lower triangles of a matrix.
    vector<int> sumTriangles(const vector<vector<int> >& matrix, int n)
    {
        int uppersum=0,lowersum=0;
        
        for(int i=0;i<n;i++)
        {
            for(int j=i;j<n;j++)
            {
                uppersum+=matrix[i][j];
            }
            
             for(int j=0;j<=i;j++)
            {
                lowersum+=matrix[i][j];
            }
        }
        
        
        
        
        return {uppersum,lowersum};
    }
};
