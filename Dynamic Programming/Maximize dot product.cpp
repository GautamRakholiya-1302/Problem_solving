class Solution{
		
	public:
int dp[1001][1001];
	int func(int i, int j, int &n, int &m, int a[], int b[]){
	    if(j == m) return 0;
	    if(i == n) return -1e7;
	    if(dp[i][j] != -1) return dp[i][j]; 
	    return dp[i][j] = max((a[i] * b[j]) + func(i+1, j+1, n, m, a, b), func(i+1, j, n, m, a, b));
	}
	int maxDotProduct(int n, int m, int a[], int b[]) {
	    memset(dp, -1, sizeof(dp));
	    return func(0, 0, n, m, a, b);
	} 
};
