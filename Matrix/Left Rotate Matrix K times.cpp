class Solution {
  public:
    vector<vector<int>> rotateMatrix(int k, vector<vector<int>> mat) {
         if (mat.empty()) return mat;
    
    int rows = mat.size();
    int cols = mat[0].size();
    
    // Reduce k using modulus to handle large k values
    k = k % cols;
    
    // Create a new matrix for the result
    vector<vector<int>> rotatedMat(rows, vector<int>(cols));
    
    for (int i = 0; i < rows; ++i) {
        for (int j = 0; j < cols; ++j) {
            int new_j = (j - k + cols) % cols;  // Calculate new column index
            rotatedMat[i][new_j] = mat[i][j];
        }
    }
    
    return rotatedMat; // code here
    }
};
