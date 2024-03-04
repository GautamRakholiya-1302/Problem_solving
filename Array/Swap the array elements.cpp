class Solution{
  public:
    void swapElements(int arr[], int n){
        
        // Your code here
          int i=0;
        while(i<n-2){
            swap(arr[i],arr[i+2]);
            i++;
        
        }
    }
};
