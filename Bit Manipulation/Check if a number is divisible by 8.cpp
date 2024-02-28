class Solution{
    public:
    int DivisibleByEight(string s){
        if(s.length() == 1)
        {
            int a = s[0];
            if(a%8==0) return 1;
            else return -1;
        }
        
        if(s.length() == 2)
        {
            int a = s[0];
            int b = s[1];
            int c = a*10 + b;
            if(c%8==0) return 1;
            else return -1;
        }
        
        int n = s.length();
        int a = s[n-1];
        int b = s[n-2];
        int c = s[n-3];
        int d = c*100 + b*10 + a;
        if(d%8==0) return 1;
        else return -1;
    }
};
