class Solution{
    public:
    bool isPowerofTwo(long long n){
        
        int c = 0;
        while (n > 0)
        {
            if ((n & 1) == 1)
                c++;
            n /= 2;
        }
        if (c != 1)
            return false;
        else
            return true;
        
    }
};
