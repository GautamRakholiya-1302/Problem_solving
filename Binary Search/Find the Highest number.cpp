class Solution {
public:
    int findPeakElement(vector<int>& a) 
    {
        int large=a[0];
        
        for(int x=0;x<a.size();x++)
        {
            if(a[x]>=large)
            {
                large=a[x];
            }
        }
        return large; // Code here.
    }
};
