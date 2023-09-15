class Solution{
public:
      int solve(int n,int arr[],int ind,int sum,vector<vector<int>> &dp){
       //BASE CASES
        if(sum < 0) return 0;
        if(ind >= n){  
            if(sum == 0) return 1;
            return 0;
        }
        //MEMOIZATION AND RECURSION
        if(dp[ind][sum] != -1) return dp[ind][sum];

        //PICK AN ELEMENT
        int pick = solve(n,arr,ind+1,sum-arr[ind],dp);
        //DO NOT PICK THAT ELEMENT
        int notpick = solve(n,arr,ind+1,sum,dp);
        //CHECK IF ANY CASE RETURNS TRUE BY PUTTING OR SIGN
        return dp[ind][sum] = notpick|pick;
    }
    int equalPartition(int n, int arr[]){
        // code here
        //IF SUM IS ODD YOU CANNOT PARTITION 
        int sum = 0;
        for(int i=0;i<n;i++){
            sum+=arr[i];
        }
        if(sum&1) return 0;
        else{
            //CREATE DP ARRAY AS REQUIRED AND CALL THE FUNCTION
            vector<vector<int>> dp(n+1,vector<int>(sum/2+1,-1));
            return solve(n,arr,0,sum/2,dp);
        }
    }
};
