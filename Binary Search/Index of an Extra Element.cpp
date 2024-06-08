class Solution {
  public:
    int findExtra(int n, int arr1[], int arr2[]) {
        int ans=-1;
       
        int low=0, high=n-2;
        while(low<=high){
            int mid=(low+high)/2;
            if(arr1[mid]==arr2[mid])low=mid+1;
            else{
                ans=mid;
                high=mid-1;
            }
        }
        if(low==n-1)return n-1;
      else  if(low==-1)return 0;
        return ans;  // add code here.
    }
};
