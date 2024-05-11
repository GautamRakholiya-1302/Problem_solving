class Solution {
  public:
    vector<long long> jugglerSequence(long long n) {
        vector<long long> res;
        
        res.push_back(n);
        while(n!=1){
            if(n%2==0)
            n=sqrt(n);
            else
            n=pow(sqrt(n), 3);
            
            res.push_back(n);
        }
       
        return res; // code here
    }
};
