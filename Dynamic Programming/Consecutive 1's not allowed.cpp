class Solution{
public:
	// #define ll long long
 int MOD = 1e9+7;
    ll counterFun(int n, vector<ll>&dp) {
        if(n==1) return 2;
	    if(n==2) return 3;
	    
	    if(dp[n]!=-1) return dp[n];
	    return dp[n] = (counterFun(n-1, dp)%MOD + counterFun(n-2, dp)%MOD)%MOD;
    }
public:
	ll countStrings(int n) {
	   vector<ll>dp(n+1, -1);
	   return counterFun(n, dp);
	}
};
