class Solution
{
    public:
    unsigned int getFirstSetBit(int n)
    {
         int count = 1;
        while(n  > 0){
            if(n & 1) return count;
            n = n >> 1;
            count++;
        }
        return 0;// Your code here
    }
};
