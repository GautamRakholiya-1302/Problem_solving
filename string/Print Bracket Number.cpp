class Solution {
  public:

    vector<int> bracketNumbers(string stri) {
       stack<int> stac;
        vector<int> ans;
        int count = 0;

        for (char ch : stri) {
            if (ch == '(') {
                count++;
                stac.push(count);
                ans.push_back(count);
            } else if (ch == ')') {
                ans.push_back(stac.top());
                stac.pop();
            }
        }

        return ans; // Your code goes here
    }
};
