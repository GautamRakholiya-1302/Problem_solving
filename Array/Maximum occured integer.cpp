class Solution {
  public:
    // l and r are input array
    // maxx : maximum in r[]
    // n: size of array
    // arr[] : declared globally with size equal to maximum in l[] and r[]
    // Function to find the maximum occurred integer in all ranges.
    int maxOccured(int n, int l[], int r[], int maxx) {

       vector<int>arr(maxx+2,0);
        for (int i=0;i<n;i++){
            arr[l[i]-1]--;
            arr[r[i]]++;
            
        }
        for(int i=maxx-1;i>=0;i--){
            arr[i] = arr[i] + arr[i+1];
        }
        int maxi = 0;
        int ans=-1;
        for (int i=0;i<=maxx;i++){
            if(arr[i]>maxi){
                maxi=arr[i];
                ans=i;
            }
        }
        return ans; // Your code here
    }
};
