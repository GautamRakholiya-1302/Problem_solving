class Solution {
  public:

    string pattern(vector<vector<int>> &a) {
           int n=a.size();
    for (int i = 0; i < n; i++) {
        int low = 0, high = n-1;
        bool isPal = true;
        while (low < high) {
            if (a[i][low] != a[i][high]) isPal = false;
            low++; high--;
        }
        if (isPal) return to_string(i) + " R";
    }
        
    for (int j = 0; j < n; j++) {
        int low = 0, high = n-1;
        bool isPal = true;
        while (low < high) {
            if (a[low][j] != a[high][j]) isPal = false;
            low++; high--;
        }
        if (isPal) return to_string(j) + " C";
    }
    return "-1";// Code Here
    }
};
