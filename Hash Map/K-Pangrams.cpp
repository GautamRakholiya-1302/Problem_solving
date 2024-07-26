class Solution {
  public:

    bool kPangram(string str, int k) {
         int arr[26] = {0}, count=0, s=0;
        for(int i=0; i<str.size(); i++) {
            if(str[i] != ' ' ){
                arr[str[i]-'a']++;
                s++;
            }
        }
        for(int i=0; i<26; i++) {
            if(arr[i] == 0) {
                count++;
            }
        }
        return (count <= k) && s >= 26; // code here
    }
};
