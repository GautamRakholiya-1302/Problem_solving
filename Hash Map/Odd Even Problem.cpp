class Solution {
  public:
    string oddEven(string s) {
       unordered_map<char,int>mp;
        for(int i=0;i<s.length();i++)
        {
            mp[s[i]]++;
        }
        int x=0;
        int y=0;
        for(auto it:mp)
        {
            if(((it.first-'a')+1)%2==0 && it.second%2==0)
            {
                x++;
            }
            else if(((it.first-'a')+1)%2!=0 && it.second%2!=0)
            {
                y++;
            }
        }
        return (x+y)%2==0?"EVEN":"ODD"; // code here
    }
};
