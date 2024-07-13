class Solution {
  public:
    void segregate0and1(vector<int> &arr) {
         int n = arr.size();
        int k=0;
        for(int i=0;i<n;i++){
            if(arr[i] == 0){
                swap(arr[k],arr[i]);
                k++;
            }
        } // code here
    }
};
