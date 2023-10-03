class Solution{
    public:
    string colName (long long int n)
    {
        string ans="";
          while(n>0)
          {
              int pos=(n-1)%26;
              char ch='A'+pos;
              ans= ch+ans;
              n=(n-1)/26;
          }
        
          return ans;
    }
};




