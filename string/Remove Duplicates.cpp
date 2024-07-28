class Solution {
  public:

    string removeDups(string str) {
         string ans;
        for (auto i : str) {
            if (ans.find(i) != std::string::npos) {
                continue;
            }
            ans += i;
        }
        
        return ans; // Your code goes here
    }
};
