class Solution {
  public:
    string binaryNextNumber(string s) {
        int n = s.length();
        string ans;
        int i = 0;
        while(s[i] == '0')  i++;
        while(i < n){
            ans.push_back(s[i]);
            i++;
        }
        n = ans.size();
        if(ans.back() == '0'){
            ans[n-1] = '1';
            return ans;
        }
        for(int i = n-1; i >= 0; i--){
            if(ans[i] == '0'){
                ans[i] = '1';
                return ans;
            }
            else{
                ans[i] = '0';
            }
        }
        ans.insert(ans.begin(), '1');
        return ans; // code here.
    }
};
