class Solution {
  public:
    long long reversedBits(long long x) {
       long long ans = 0;
        for(int i = 0; i < 32; i++){
            ans <<= 1;
            ans = (ans | (x & 1));
            x >>= 1;
            
        }
        return ans; // code here
    }
};
