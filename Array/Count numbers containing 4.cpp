class Solution {
  public:
    int countNumberswith4(int n) {
          int count = 0;
        for (int i = 1; i <= n; ++i) {
            std::string numberStr = std::to_string(i);
            if (numberStr.find('4') != std::string::npos) {
                count++;
            }
        }
        return count;// code here
    }
};
