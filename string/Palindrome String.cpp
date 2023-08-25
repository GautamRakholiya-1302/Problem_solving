class Solution{
public:	
	
	
	int isPalindrome(string s)
{
        for(int i = 0; i<s.length()/2;i++)
        {
            if(s[i]!=s[s.length()-i-1]) return 0;
        }
        return 1;
}

};
