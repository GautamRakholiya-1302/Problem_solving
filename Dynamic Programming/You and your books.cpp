class Solution {
  public:
    /*You are requried to complete this method */
    long long max_Books(int arr[], int n, int k) {
        int l = 0, r = 0;
        long long maxi = 0;
        long long sum = 0;
        while(r < n){
            if(arr[r] > k){
                r++;
                l = r;
                sum = 0;
            }
            else{
                sum += arr[r];
                r++;
                maxi = max(maxi ,sum);
            }
        }
        return maxi; // Your code here
    }
};
