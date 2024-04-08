class Solution{
    public:
    long long maximumAmount(int n, int arr[]){
        int dp[n][n];
        memset(dp,0,sizeof(dp));
        for(int i=0;i<n;i++){
            dp[i][i]=arr[i];
        }
        for(int i=0;i<n-1;i++){
            dp[i][i+1]=max(arr[i], arr[i+1]);
        }
        for(int g=2;g<n;g++){
            for(int i=0;i+g<n;i++){
                int j=g+i;
                dp[i][j]=max(arr[i]+min(dp[i+2][j], dp[i+1][j-1]), arr[j]+min(dp[i+1][j-1], dp[i][j-2]));
            }
        }
        return dp[0][n-1];// Your code here
    }
};
