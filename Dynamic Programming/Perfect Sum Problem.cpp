class Solution{

	public:
int mod = 1e9 + 7 ;
    vector<vector<int>>dp ;
    
    int solve( int arr[] , int n , int sum , int i )
    {
        if( sum == 0 ) return 1 ;
        
        if( sum < 0 or i >= n ) return 0 ;
        
        if( dp[i][sum] != - 1 ) return dp[i][sum] ;
        
        return dp[i][sum]  = ( solve( arr , n , sum - arr[i] , i+1  ) + solve( arr , n , sum  , i+1  ) )%mod ;
    }
    
    int perfectSum(int arr[], int n, int sum)
    {
        // Your code goes here
        sort( arr , arr+n ) ;
        dp.resize( n+1 , vector<int>( sum +1 , -1 ) ) ;
        return solve( arr , n , sum  , 0 ) ;
    }
	  
};
