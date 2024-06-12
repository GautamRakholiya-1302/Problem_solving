class Solution
{
    public:
    int padovanSequence(int n)
    {
       if(n<3) return 1;
       if(n==3) return 2;
       const int mod=1e9+7;
       int a=1,b=1,c=1;
       int ans;
       for(int i=3;i<=n;i++){
           ans=a%mod+b%mod;
           a=b%mod;
           b=c%mod;
           c=ans%mod;
       }
       return ans%mod; //code here
    }
    
};
