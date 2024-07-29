class Solution {
  public:
    int rowWithMax1s(vector<vector<int> > arr) {
         int n = arr.size();
        int m = arr[0].size();
        int maxi = 0, ans = -1;
        
        for(int i=0; i<n; i++){
            int ones = count(arr[i].begin(), arr[i].end(), 1);
            if(ones > maxi){
                maxi = ones;
                ans = i;
            }
        }
        return ans; // code here
    }
};
