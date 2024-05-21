class Solution {
  public:
      bool solve(double md,vector<int>&st,int n,int k)
  {
      int count=0;
      for(int i=1;i<n;i++)
      {
          int x=floor((st[i]-st[i-1])/md);
          if(2*x == (double)(st[i]-st[i-1])){
            --x;
            }
          count+=x;
      }
      if(count<=k)
      {
          return true;
      }
      return false;
  }
    double findSmallestMaxDist(vector<int> &st, int k) {
        // Code here
        int n=st.size();
        double mini=0;
        double maxi=st[n-1]-st[0];
        double ans=0;
        while((maxi-mini)>1e-7)
        {
            double mid=(maxi-mini)/2.0+mini;
            if(solve(mid,st,n,k))
            {
                ans=mid;
                maxi=mid;
                
            }
            else
            {   
                mini=mid;
            }
        }
        return ans;
    }
};
