class Solution {
  public:
    const int MOD = 1e9 + 7;
    long long int findMaxProduct(vector<int>& arr) {
        // Write your code here
        int n = arr.size();
    if (n == 1) return arr[0] % MOD;

    sort(arr.begin(), arr.end());

    long long product = 1;
    int zeroCount = 0, positiveCount = 0, negativeCount = 0;
    int maxNegative = INT_MIN;

    for (int num : arr) {
        if (num == 0) {
            zeroCount++;
        } else if (num > 0) {
            positiveCount++;
            product = (product * num) % MOD;
        } else {
            negativeCount++;
            maxNegative = max(maxNegative, num);
            product = (product * num) % MOD;
        }
    }

    if (zeroCount == n) return 0;

    if (negativeCount % 2 != 0) {
        if (negativeCount == 1 && zeroCount + negativeCount == n) return 0;
        product = (product / maxNegative) % MOD;
    }

    if (product < 0) product += MOD;
    return product;
    }
};
