class Solution {
  public:
    int isPerfectNumber(long long N) {
        long long sum=1;
        if(N==0||N==1)
        return 0;
        for(int i=2;i<=sqrt(N);i++){
            if(N%i==0)
            sum+=i+(N/i);
        }
        if(sum==N)
        return 1;
        else
        return 0;
    }
};
