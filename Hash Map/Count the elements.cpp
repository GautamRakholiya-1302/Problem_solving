class Solution {
  public:
   vector<int> countElements(vector<int> &a, vector<int> &b, int n, vector<int> &queries, int q) {
       sort(b.begin(),b.end());
       vector<int>ans;
      for(int i=0;i<q;i++){
          int p=a[queries[i]];
          int ind=upper_bound(b.begin(),b.end(),p)-b.begin();
          ans.push_back(ind);
      }
       return ans;
    }
};
