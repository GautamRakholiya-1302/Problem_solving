class Solution {
  public:
    //Function to find two repeated elements.
    vector<int> twoRepeated (int arr[], int n) {
        vector<int>ans((n+1),0);
        vector<int>res;
        for(int i=0;i<n+2;i++){
            ans[arr[i]]++;
            if(ans[arr[i]]==2){
                res.push_back(arr[i]);
            }
        }
        return res; // Your code here
    }
};
