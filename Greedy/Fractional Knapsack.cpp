class Solution
{
    public:
    double fractionalKnapsack(int w, Item arr[], int n)
    {
      vector<pair<double,int>>v;
      int sum=0;
      double ans=0;
      
      for(int i=0;i<n;i++)
      {
          double x=(arr[i].value*1.0)/(arr[i].weight*1.0);
          v.push_back({x,i});
          
      }
      sort(v.begin(),v.end(),greater<pair<double,int>>());
      for(int i=0;i<n;i++)
      {
          if(sum +arr[v[i].second].weight<w)
          {
              ans=ans +arr[v[i].second].value;
              sum=sum+ arr[v[i].second].weight;
          }
          else
          {
              double x=(w-sum)*1.0;
              ans =ans+(x*v[i].first);
              break;
          }
      }
      return ans;
    }
        
};
