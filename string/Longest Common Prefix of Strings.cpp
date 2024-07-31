class Solution {
  public:

    string longestCommonPrefix(vector<string> arr) {
        string s = *min_element(arr.begin(), arr.end());
        for(int i=0; i < arr.size(); i++) {
            int j = 0;
            for(; j < s.size(); j++) {
                if(s[j] != arr[i][j])   break;   
            }
            s = min(s, arr[i].substr(0, j));
        }
        return (s != "") ? s : "-1"; // your code here
    }
};
