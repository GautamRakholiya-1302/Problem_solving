class Solution {
  public:
    long long sumMatrix(long long n, long long q) {
          if (q < 2 || q > 2 * n) {
            return 0;
        }
        return min(n, q - 1) - max(1LL, q - n) + 1; // code here
    }
};
