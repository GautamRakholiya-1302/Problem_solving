class Solution {

  public:
    int findSwapValues(int a[], int n, int b[], int m) {
         int sumA = 0, sumB = 0, target = 0, val = 0;
        unordered_map<int, bool> hashA;
        for(int i = 0; i < n; i++){
            sumA += a[i];
            hashA[a[i]] = true;
        }
        for(int i = 0; i < m; i++){
            sumB += b[i];
        }
        if((sumA - sumB) % 2 != 0){
            return -1;
        }
        target = (sumA - sumB)/2;
        for(int i = 0; i < m; i++){
            if(hashA[b[i] + target] == true){
                return 1;
            }
        }
        return -1;// Your code goes here
    }
};
